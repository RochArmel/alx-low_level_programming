#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c='e';
	int anInt = 100;
	float fl = 5.9;
	printf("Size of char : %c,\nSize of integer : %d\nSize of float : %f", (unsigned long) sizeof(c), (unsigned long) sizeof(anInt), (unsigned long) sizeof(fl));
	return (0);

}
