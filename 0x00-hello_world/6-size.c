#include <stdio.h>

/**
 *main -The main is where the program starts
 *
 *Return:is where the declared variable ends
 */

int main(void)
{
	printf("size of char: %ld byte\n", sizeof(char));
	printf("size of int: %ld bytes\n", sizeof(int));
	printf("size of long int: %ld bytes\n", sizeof(long int));
	printf("size of long long int: %ld bytes\n", sizeof(long long int));
	printf("size of float: %ld bytes\n", sizeof(float));
	return (0);
}
