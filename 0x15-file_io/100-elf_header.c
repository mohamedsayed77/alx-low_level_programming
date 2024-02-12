#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

void print_elf_header(const Elf64_Ehdr *header);
int is_elf_file(const Elf64_Ehdr *header);

/**
* main - Entry point, program that displays information contained in ELF header
* @argc: Argument count
* @argv: Argument vector
*
* Return: On success, EXIT_SUCCESS. On error, exits with status code 98.
*/

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		exit(98);
	}

	if (!is_elf_file(&header))
	{
		fprintf(stderr, "File is not a valid ELF file\n");
		close(fd);
		exit(98);
	}

	print_elf_header(&header);
	close(fd);
	return (0);
}

/**
* is_elf_file - Checks if file is an ELF file
* @header: Pointer to ELF header structure
*
* Return: 1 if file is ELF, otherwise 0
*/

int is_elf_file(const Elf64_Ehdr *header)
{
	return (memcmp(header->e_ident, ELFMAG, SELFMAG) == 0);
}


/**
* print_elf_header - Prints the ELF header information
* @header: Pointer to ELF header
*/

void print_elf_header(const Elf64_Ehdr *header)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:                             ELF%d\n",
		header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data:                              %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %u (current)\n",
		header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %u\n",
		header->e_ident[EI_OSABI]);
	printf("Type:                              %u\n", header->e_type);
	printf("Entry point address:               0x%lx\n",
		(unsigned long)header->e_entry);
}
