/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:56:04 by mmesgari          #+#    #+#             */
/*   Updated: 2026/04/01 21:23:22 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
		char *s1;
		char *s2;
		if (argc == 3)
		{
			s1 = argv[1];
			s2 = argv[2];
			while (*s1 && *s2)
			{
					if (*s1 == *s2)
							s1++;
					s2++;
			}
			if (!*s1)
			{
					while (*argv[1])
					{
							write (1, argv[1], 1);
							argv[1]++;
					}
			}
		}
		write(1, "\n", 1);
		return (0);
}

/*
int	ft_strlen(char *str)
{
		int len = 0;

		while (*str)
		{
				str++;
				len++;
		}
		return (len);
}

int	main(int argc, char **argv)
{
		int i = 0;
		int j = 0;
		int len = 0;
		char *str;

		if (argc == 3)
		{
				
	   			str = argv[1];
				len = ft_strlen(argv[1]);
				while (*argv[1])
				{
						while (*argv[2])
						{
								if (*argv[1] == *argv[2])
								{
										i++;
										argv[2]++;
										break;
								}
								argv[2]++;
						}
						argv[1]++;
				}
				if (i == len)
				{
					while (j < i )
					{
							write(1, &str[j], 1);
							j++;
					}
				}
		}
		write(1, "\n", 1);
		return (0);
}
*/
