/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_21.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:40:14 by mmesgari          #+#    #+#             */
/*   Updated: 2026/03/27 14:38:35 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
		unsigned int i = 1;
		
		while ( i <= n)
		{
			if (i == n)
					return (1);
			i *= 2;
		}
		return (0);
}
/*
#include <stdio.h>

int	main()
{
		int nbr = 32;
		printf("%d:\n", is_power_of_2(nbr));
		nbr = 64;
		printf("%d:\n", is_power_of_2(nbr));
		nbr = 128;
		printf("%d:\n", is_power_of_2(nbr));
		nbr = 225;
		printf("%d:\n", is_power_of_2(nbr));
		return (0);
}
*/
