#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

void print_elf_header(Elf64_Ehdr *ehdr);
int check_elf_file(int fd, Elf64_Ehdr *ehdr);
void exit_with_error(int fd, const char *message);

/**
* main - Entry point, prints the ELF header of a file
* @argc: Argument count
* @argv: Argument values
* Return: EXIT_SUCCESS or EXIT_FAILURE
*/

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		exit_with_error(fd, "Error opening file");

	if (!check_elf_file(fd, &ehdr))
		exit_with_error(fd, "File is not an ELF file");

	print_elf_header(&ehdr);
	close(fd);
	return (EXIT_SUCCESS);
}

/**
* check_elf_file - Checks if the file is an ELF file by
*	 reading the magic number
* @fd: File descriptor of the file
* @ehdr: Pointer to ELF header struct
* Return: 1 if file is ELF, 0 otherwise
*/

int check_elf_file(int fd, Elf64_Ehdr *ehdr)
{
	if (read(fd, ehdr, sizeof(*ehdr)) != sizeof(*ehdr))
		exit_with_error(fd, "Error reading ELF header");

	if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0)
		return (0);

	return (1);
}

/**
* exit_with_error - Prints an error message and exits with status code 98
* @fd: File descriptor to be closed if valid
* @message: Error message to print to stderr
*/

void exit_with_error(int fd, const char *message)
{
	if (fd != -1)
		close(fd);
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
* print_elf_header - Prints specific information from the ELF file header
* @ehdr: Pointer to ELF header struct
*/

void print_elf_header(Elf64_Ehdr *ehdr)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr->e_ident[i]);
	printf("\n");

	printf("  Class:                             ELF%d\n",
	ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("  Data:                              2's complement, %s\n",
	ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian");
	printf("  Version:                           %u (current)\n",
	ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - System V\n");
	printf("  ABI Version:                       %u\n",
	ehdr->e_ident[EI_OSABI]);
	printf("  Type:                              %u\n",
	ehdr->e_type);
	printf("  Entry point address:               0x%lx\n",
	(unsigned long)ehdr->e_entry);
}
