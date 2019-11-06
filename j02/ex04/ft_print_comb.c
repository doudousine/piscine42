/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 23:48:18 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 11:47:34 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//IGNORE THIS EXERCICE, pqs utile pour les exams ou meme pour comprendre le c
//just a brain appetizer
void	ft_putchar(char c);

void	ft_display_comb(int n0, int n1, int n2)
{
	if ((n0 < n1) && (n1 < n2))
	{
		ft_putchar(n0);
		ft_putchar(n1);
		ft_putchar(n2);
		if (n0 != 55)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = 48;
	n[1] = 48;
	n[2] = 48;
	while (n[0] <= 57)
	{
		ft_display_comb(n[0], n[1], n[2]);
		if (n[2]++ >= 57)
		{
			n[2] = 48;
			n[1]++;
		}
		if (n[1] == 58)
		{
			n[1] = 48;
			n[0]++;
		}
	}
}
