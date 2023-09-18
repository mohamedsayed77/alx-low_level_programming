#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: take address of the variable
 * @b: take address of the variable
 *
*/
void swap_int(int *a, int *b)
{

int tmp;


tmp = *a;
*a = *b;
*b = tmp;
}
