#include "main.h"
/**
 * create_file - function that creates and writes into a
 * file and copies content in it
 * @filename: create a new file called filename
 * @text_content: content to be copied into the fie
 * Return: 1 if success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int kletters;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (kletters = 0; text_content[kletters]; kletters++)
		;
	wr = write(fd, text_content, kletters);

	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
