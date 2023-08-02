# include "main.h"
/**
 * main - create a copy
 * @ac: argument counter
 * @av: argument values
 * Return: Always 0 (Success)
*/
int main(int ac, char *av[])
{
	char *buf[1024];
	int fd1, fd2;
	ssize_t fr, fw;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((fr = read(fd1, buf, 1024)) != 0)
	{
		if (fr == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		fw = write(fd2, buf, fr);
		if (fw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	else
		close(fd2);

	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	else
		close(fd1);
	return (0);
}
