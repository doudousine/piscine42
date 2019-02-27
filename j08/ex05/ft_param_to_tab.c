/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:09:05 by djsy              #+#    #+#             */
/*   Updated: 2019/02/27 15:16:53 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (str[i])
		j++;
	i = 0;
	dup = malloc(sizeof(char) * j + 1);
	while (i < j)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	int					size;
	struct s_stock_par	*tab;

	i = 0;
	tab = (t_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	while (i < ac)
	{
		tab->size_param = ft_strlen(av[i]);
		tab->str = av[i];
		tab->copy = ft_strdup(av[i]);
		tab->tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (tab);
}
