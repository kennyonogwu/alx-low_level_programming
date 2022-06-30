#include <stdio.h>
/** Main:The main is where the program starts
 *
 *The Return is where the declared variable ends
 */
int main(void)
{
	char 		charactera;
	int 		integera;
	float		floata;
	long		longa;
	long long	longlonga;

	printf("size of char: %lu byte\n", sizeof(charactera));
	printf("size of int: %lu byte\n", sizeof(integera));
	printf("size of float: %lu byte\n", sizeof(floata));
	printf("size of long: %lu byte\n", sizeof(longa));
	printf("size of longlong: %lu byte\n", sizeof(longlonga));
	
	return (0);
}
