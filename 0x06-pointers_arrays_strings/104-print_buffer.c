#include "main.h"
#include <stdio.h>

/**
 * print_line - prints s bytes of a buffer
 * @buffer: buffer to print
 * @bytes: bytes of buffer to print
 * @line: line of buffer to print
 *
 * Return: void
 */
void print_line(char *buffer, int bytes, int line)
{
	/* Printing hexadecimal values */
	int loop1, loop2;

	for (loop1 = 0; loop1 <= 9; loop1++)
	{
		if (loop1 <= bytes)
			printf("%02x", buffer[line * 10 + loop1]);
		else
			printf("  ");

		if (loop1 % 2)
			putchar(' ');
	}

	/* Printing ASCII values */
	for (loop2 = 0; loop2 <= bytes; loop2++)
	{
		if (buffer[line * 10 + loop2] > 31 && buffer[line * 10 + loop2] < 127)
			putchar(buffer[line * 10 + loop2]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @buf: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *buf, int size)
{
	/* Loop through the buffer */
	int loop;

	for (loop = 0; loop <= (size - 1) / 10 && size; loop++)
	{
		printf("%08x: ", loop * 10);

		if (loop < size / 10)
			print_line(buf, 9, loop);
		else
			print_line(buf, size % 10 - 1, loop);

		putchar('\n');
	}

	if (size == 0)
		putchar('\n');
}
