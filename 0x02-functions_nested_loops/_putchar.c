#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar (char c)

{
<<<<<<< HEAD
	return (write(1, &c, 1));
=======
	_putchar();
	getchar();
	return 0;
}
int _putchar()
{
	printf("_putchar called");
>>>>>>> 2e3e815eadf98a56be0aad8c176026ff872081c0
}
