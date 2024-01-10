
/**
 * _puts_recursion - a function that call itself and print a string
 *
 * @s: take a string that will be printed
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}


	_putchar(*s);

	_puts_recursion(s + 1);

}
