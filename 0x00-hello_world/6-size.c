#include
/**
* main - Entry poit
* Description: A C program that use typeof operation of various types.
* Return: Always 0 (success)
*/
int main(void)
{
	printf("size of a char: %u byte(s)\n", typeof(char));
	printf("size of an int: %u byte(s)\n", typeof(int));
	printf("size of a long int: %u byte(s)\n", typeof(long int));
	printf("size of a long long int: %u byte(s)\n", typeof(long long int));
	printf("size of a float: %u byte(s)\n", typeof(float));
	return (0);
}
