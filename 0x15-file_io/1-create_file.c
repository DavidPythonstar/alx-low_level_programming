#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * @filename: file
 * @text_content: content to be added
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(o, text_content, len);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}
