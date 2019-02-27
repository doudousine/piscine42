/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 14:49:21 by djsy              #+#    #+#             */
/*   Updated: 2019/02/27 15:25:55 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int size;
	int temp;

	temp = nb;
	size = 1;
	while (temp > 0)
	{
		temp /= 10;
		size *= 10;
	}
	while (size)
	{
		ft_putchar((char)(temp / size) + 48);
		temp %= size;
		size /= 10;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(&str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	if (tab == NULL)
		(void)tab;
	else
		while (tab[i])
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i++;
		}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = -1;
	while (par[i].str)
	{
		ft_putnbr(par[i].size_param);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
