/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 07:42:50 by mmesgari          #+#    #+#             */
/*   Updated: 2026/04/02 12:04:03 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
		int	nb = 0;

		while (*str)
		{
				nb = nb * 10 + (*str - '0');
				str++;
		}
		return (nb);
}

void ft_putnbr(int nb)
{
		char c;
		if (nb > 9)
				ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write (1, &c, 1);
}

int	main(int argc, char **argv)
{
		int	nb = 0;
		int sum = 2;
		int	i = 3;
		int	j;
		int flag;

		if (argc == 2)
		{
				if (*argv[1] != '-' && ft_atoi(argv[1]) > 1)
				{
					nb = ft_atoi(argv[1]);
					if(nb == 2)
					{
							write(1, "2\n", 2);
							return (0);
					}
					if (nb % 2 == 0)
							nb--;
					while (i <= nb)
					{
							j = 2;
							flag = 1;
							while (j < i / 2)
							{
									if (i % j == 0)
									{
											flag = 0;
											break;
									}
									j++;
							}
							if (flag == 1)
									sum += i;
							i += 2;
					}
					ft_putnbr(sum);
				}
				else
						write (1, "0", 1);
		}
		else
				write (1, "0", 1);
		write(1, "\n", 1);
		return (0);
}
