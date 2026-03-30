/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:43:11 by mmesgari          #+#    #+#             */
/*   Updated: 2026/03/30 16:03:36 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
		char hex[] ="0123456789abcdef";
		char hexu[] = "0123456789ABCDEF";
		int value = 0;
		int	result = 0;
		int	i = 0;
		int	j = 0;
		int found = 0;	
		int sign = 1;

		if (str[i] == '-')
		{
				sign = -1;
				i++;
		}

		while (str[i])
		{
				j = 0;
				found = 0;
				while (j < str_base)
				{
						if (str[i] == hex[j] || str[i] == hexu[j])
						{
								value = j;
								found = 1;
								break;
						}
						j++;
				}
				if (found == 0)
						break;
				result = (result * str_base) + value;
				i++;
		}
		result *= sign;
		return (result);
}


#include <stdio.h>
int	main()
{
		char *str;
		int	n = 16;
	   	str	= "FF";
		printf(":%d:\n", ft_atoi_base(str, n));
		str = "3022";
		n = 4;
		printf(":%d:\n", ft_atoi_base(str, n));
		str = "-119";
		n = 12;
		printf(":%d:\n", ft_atoi_base(str, n));
		str = "44";
		n = 5;
		printf(":%d:\n", ft_atoi_base(str, n));
		str = "12A";
		n = 10;
		printf(":%d:\n", ft_atoi_base(str, n));
		str = "12*3";
		n = 10;
		printf(":%d:\n", ft_atoi_base(str, n));
		str = "1a";
        n = 16;
        printf(":%d:\n", ft_atoi_base(str, n));

	return (0);
}


























































/*
int	ft_atoi_base(const char *str, int base)
{
	char	*number;
	int		result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	number = (char *)str;
	if (number[i] == '-')
	{
		sign *= -1;
		i++;
	}
	result = 0;
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			result = result * base + number[i] - '0';
		else if (number[i] >= 'A' && number[i] <= 'F')
			result = result * base + number[i] - '7';
		else if (number[i] >= 'a' && number[i] <= 'f')
			result = result * base + number[i] - 'W';
		i++;
	}
	return (sign * result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("-aa", 16));
	return (0);
}
*/
