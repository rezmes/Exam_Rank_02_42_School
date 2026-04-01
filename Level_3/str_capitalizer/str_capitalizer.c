/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:46:50 by mmesgari          #+#    #+#             */
/*   Updated: 2026/04/01 16:01:23 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
		int	i = 1;
		int	j = 0;

		if (argc == 1)
				write(1, "\n", 1);
		if (argc > 1)
		{
				while (argv[i])
				{
						j = 0;
						while (argv[i][j])
						{
							if ( j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t')
							{
									if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
											argv[i][j] -= 'a' - 'A';
							}
							else if (argv[i][j] != ' ' && argv[i][j] != '\t')
							{
								if (argv[i][j - 1] != ' ' && argv[i][j - 1] != '\t')
										if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
												argv[i][j] += 'a' - 'A';
							}
							write(1, &argv[i][j], 1);
							j++;
						}
						write (1, "\n", 1);
						i++;
				}
		}
		return (0);
}
