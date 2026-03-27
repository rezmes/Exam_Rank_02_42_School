/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesgari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:02:10 by mmesgari          #+#    #+#             */
/*   Updated: 2026/03/27 16:10:29 by mmesgari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
		int	i = 7;
		unsigned char revers = 0;
		
		while (i >= 0 )
		{
			revers = (octet >> i ) & 1;
				i--;
		}
		return (revers);
}




/*

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	i = 8;
	result = 0;
	while (i-- > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (result);
}

*/

#include <stdio.h> 

int	main(void)
{
	unsigned char	resultado;
	unsigned char	octet;

	octet = 0x42;
	resultado = reverse_bits(octet);
	printf("Octeto original: 0x%X\n", octet);
	printf("Octeto con bits intercambiados: 0x%X\n", resultado);
	return (0);
}
