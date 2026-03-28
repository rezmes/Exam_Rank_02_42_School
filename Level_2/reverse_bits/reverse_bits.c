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
		int	i = 0;
		unsigned char revers = 0;
		
		while (i <= 7 )
		{
			revers = revers << 1;
			revers |= ((octet >> i) & 1);
			i++;
		}
		return (revers);
}

/*

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


*/
/*
#include <unistd.h>


int main(void)
{
        unsigned char test_char = 'A';
        unsigned char reversed = reverse_bits(test_char);

        int i;
        char bit;

        i = 7;
        while (i >= 0)
        {
                bit = ((test_char >> i) & 1) + '0'; // تبدیل عدد 0 یا 1 به کاراکتر '0' یا '1'
                write(1, &bit, 1);
                i--;
        }
        write(1, "\n", 1);

        i = 7;
        while (i >= 0)
        {
                bit = ((reversed >> i) & 1) + '0';
                write(1, &bit, 1);
                i--;
        }
        write(1, "\n", 1);

        return (0);
}
*/
