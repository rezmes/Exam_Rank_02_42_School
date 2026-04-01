/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:34:11 by mmesgari          #+#    #+#             */
/*   Updated: 2026/04/01 16:52:51 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int i)
{
		char c;

		if (i > 9)
				putnbr(i / 10);
		c = (i % 10) + '0';
		write (1, &c, 1);
}

int	main(void)
{
		int i = 0;
		while (i <= 100)
		{
			if (!(i % 3) && !(i % 5))
			{
					write (1, "fizzbuzz", 8);
					write (1, "\n", 1);
			}
			else if (!(i % 3))
			{
					write (1, "fizz", 4);
					write (1, "\n", 1);
			}
			else if (!(i % 5))
			{
					write (1, "buzz", 4);
					write (1, "\n", 1);
			}
			else
			{
					putnbr(i);
					write (1, "\n", 1);
			}
			i++;
		}
		return (0);
}
