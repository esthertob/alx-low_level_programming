#include <stdio.h>
/**
* main - prints tha alphabet in lowercase
* Author: Oluwatobi
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	putchar('\n');

	return (0);
}

