#include "main.h"
#include <stdio.h>

/**
 * is_printable_ascii - checks if the int is ascii printable
 * @n: the integer to be checked
 * Return: 0 or 1
 */

int is_printable_ascii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * print_hex - prints the hex vals for b string in formatted form
 * @b: string to be printed
 * @start: the starting position
 * @end: the ending position
 * Return: void
 */

void print_hex(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * print_ascii - prints the ascii vlues for the b string
 * @b: the string to be printed
 * @start: the starting position
 * @end: the ending position
 * Return: void
 */

void print_ascii(char *b, int start, int end)
{
	int i = 0, ch;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!is_printable_ascii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints the contents of a buffer
 * @b: pointer to the buffer
 * @size: the number of bytes to be printed from the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			print_hex(b, start, end);
			print_ascii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
