/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:52:22 by mmesgari          #+#    #+#             */
/*   Updated: 2026/03/24 16:36:04 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skp_wc(char **argv)
{
		int	i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
		return (i);
}

int	main(int argc, char **argv)
{
		int i = 0;

		if (argc == 2)
		{
			i = skp_wc(argv);
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{	
					write(1, &argv[1][i], 1);
					i++;
			}
		}
		write(1, "\n", 1);
		return (0);
}
