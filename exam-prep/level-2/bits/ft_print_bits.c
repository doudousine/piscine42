/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 07:28:17 by djsy              #+#    #+#             */
/*   Updated: 2019/03/01 07:58:24 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i =  128;

	while (i != 0)
	{
		if(octet > i)
		{
			ft_putchar('1');
			octet -= i;
		}
		else
			ft_putchar('0');
		i /= 2;
	}
}

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet >> 4));
}

int main()
{
	print_bits(swap_bits(255));
	return (0);
}
