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
	long int	longlonga;
	long long int 	longlonginta;

	printf("size of char: %lu byte\n", sizeof(charactera));
	printf("size of int: %lu bytes\n", sizeof(integera));
	printf("size of float: %lu bytes\n", sizeof(floata));
	printf("size of long: %lu bytes\n", sizeof(longa));
	printf("size of long int: %lu bytes\n", sizeof(longlonga));
	printf("size of long long int: %lu bytes\n", sizeof(longlonginta));
	return (0);
}
