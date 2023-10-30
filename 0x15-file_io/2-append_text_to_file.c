#include "main.h"
/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of a file
 * Return: 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int kletters;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (kletters = 0; text_content[kletters]; kletters++)
			;
		wr = write(fd, text_content, kletters);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	
	return (1);
}
