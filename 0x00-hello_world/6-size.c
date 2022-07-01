#include <stdio.h>

/** 
 * Main:The main is where the program starts
 *Nothing here
 *The Return is where the declared variable ends
 */

int main(void)
{
	char		charactera;
	int		integera;
	float		floata;
	long		longa;
	long int	longinta;
	
	printf("size of char: %lu byte\n", sizeof(charactera));
	printf("size of int: %lu bytes\n", sizeof(integera));
	printf("size of float: %lu bytes\n", sizeof(floata));
	printf("size of long: %lu bytes\n", sizeof(longa));
	printf("size of long int: %lu bytes\n", sizeof(longinta));
	
	return (0);
}
