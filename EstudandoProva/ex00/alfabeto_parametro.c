int main(int argc, char *argv[])
{
	int i;
	int max;

	max = argc - 1;;
	while (argc < max)
	{
		while(argv[i][i])
		{
			if(argv[i][i] != 'a')
			{
				write(1, 'a', 1);
				write(1, "\n", 1);
				return 0;
			}
		}
	}
}

