#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file tobe created
 * @text_content: file content.
 * Return: 1 for sucess.
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, len);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}
