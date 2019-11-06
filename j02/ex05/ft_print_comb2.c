/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:47:16 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 11:47:20 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//IGBORE THIS ONE TOO
void	ft_putchar(char c);

int		ft_display_print(int a, int b)
{
	int okflag;

	okflag = 0;
	if (((a / 10) <= (b / 10)) && ((a % 10) <= (b % 10)))
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
	}
	else
		okflag = 1;
	return (okflag);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int okflag;

	a = 0;
	b = a + 1;
	okflag = 0;
	while (a <= 98 && b <= 99)
	{
		while (a <= 98 && b <= 99)
		{
			okflag = ft_display_print(a, b);
			if (a != 98 && okflag != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
