
#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse.
 * Author: Oluwatobi
 * Return: 0
*/
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
