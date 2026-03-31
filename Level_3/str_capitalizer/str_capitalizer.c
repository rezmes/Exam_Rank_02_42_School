/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:46:50 by mmesgari          #+#    #+#             */
/*   Updated: 2026/03/31 14:47:12 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
		int i = 1;
		int j = 0;

		if (argc > 1)
		{
				while (argv[i])
				{
						j= 0;
						while (argv[i][j])
						{
								while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
								{
										write(1, &argv[i][j], 1);
										j++;
								}
								if (argv[i][j] && argv[i][j] >= 'a' && argv[i][j] <= 'z')
										argv[i][j] -= 'a' - 'A';
								write(1, &argv[i][j], 1);
								j++;
								while (argv[i][j] && argv[i][j] != ' ' && argv[i][j] != '\t')
								{
										if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
												argv[i][j] += 'a'- 'A';
										write(1, &argv[i][j], 1);
										j++;
								}
						}
						write (1, "\n", 1);
						i++;
				}
		}
		else
				write(1, "\n", 1);
		return (0);
}
