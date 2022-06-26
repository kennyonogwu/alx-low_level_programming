#include <stdio.h>
#include <unistd.h>
/**
 * main:where the program starts
 * Nothing for here
 * Return should be one.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
