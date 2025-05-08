#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int final;

	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		final = argc - 1;
		i = 0;
		while (argv[final][i])
		{
			write(1, &argv[final][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}