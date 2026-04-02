#include <unistd.h>

/*
int	main(int argc, char **argv)
{
		char *first;
		int	flag = 0;
		first = argv[1];

		if (argc == 2)
		{
				while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
						argv[1]++;
				if (*argv[1])
						first = argv[1];
				while (*argv[1] && *argv[1] != ' ' && *argv[1] != '\t')
						argv[1]++;
				while (*argv[1])
				{
					flag = 0;
					while (*argv[1] == ' ' || *argv[1] == '\t')
							argv[1]++;
					while (*argv[1] && *argv[1] != ' ' && *argv[1] != '\t')
					{
							write (1, argv[1], 1);
							argv[1]++;
							flag = 1;
					}
					if (*argv[1])
							write (1, " ", 1);
				}
				if (flag == 1 )
						write(1, " ", 1);
				while (*first && *first != ' ' && *first != '\t')
				{
						write (1, first, 1);
						first++;
				}
		}
		write(1, "\n", 1);
		return (0);
}
*/
#include <stdlib.h>

int	main(int argc, char **argv)
{
		char *first;
		int	i = 0;
		int j = 0;
		int len = 0;
		int flag = 0;

		if (argc == 2)
		{
				while (argv[1][j] && (argv[1][j] == ' ' || argv[1][j] == '\t'))
						j++;
				while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
				{
						j++;
						len++;
				}
				first = malloc(sizeof(char) * (len + 1));
				if (!first)
						return (0);
				j = 0;
				while (argv[1][j] && (argv[1][j] == ' ' || argv[1][j] == '\t'))
						j++;
				while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
				{
						first[i] = argv[1][j];
						i++;
						j++;
				}
				first[i] = '\0';
				while (argv[1][j])
				{
					while (argv[1][j] && (argv[1][j] == ' ' || argv[1][j] == '\t'))
							j++;
					while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
					{
							write(1, &argv[1][j], 1);
							j++;
							flag = 1;
					}
					if (argv[1][j])
							write(1, " ", 1);
				}
				if (flag == 1)
						write(1, " ", 1);
				i = 0;
				while (first[i])
				{
						write(1, &first[i], 1);
						i++;
				}
		free(first);
		}
		write(1, "\n", 1);
		return (0);
}
