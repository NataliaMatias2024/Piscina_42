#include <unistd.h>
#include <stdio.h>

int	main (int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else if (argc > 2)
	{
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}