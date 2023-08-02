# include "main.h"
/**
 * read_textfile - that reads a text file
 * @filename: variable pointer
 * @letters: size letters
 * Return: the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, l, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	l = read(file, text, letters);

	w = write(STDOUT_FILENO, text, l);

	close(file);

	return (w);
}
