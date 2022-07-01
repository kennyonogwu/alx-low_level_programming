#include <stdio.h>

/** 
 *main -The main is where the program starts
 * 
 *Return:is where the declared variable ends
 */

int main(void)
{	
	printf("size of char: %lu byte\n", sizeof(char));
	printf("size of int: %lu bytes\n", sizeof(int));
	printf("size of float: %lu bytes\n", sizeof(float));
	printf("size of long int: %lu bytes\n", sizeof(long int));
	printf("size of long long int: %lu bytes\n", sizeof(long long int));
	
	return (0);
}
