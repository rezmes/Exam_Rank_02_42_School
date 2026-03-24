/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:23:51 by mmesgari          #+#    #+#             */
/*   Updated: 2026/03/24 17:31:27 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
		while (*str)
		{
				write (1, str, 1);
				str++;
		}
}
/*
int	main(int argc, char **argv)
{
		if (argc == 2)
				ft_putstr(argv[1]);
		write (1, "\n", 1);
		return (0);
}
*/
