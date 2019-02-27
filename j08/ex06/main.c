/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:39:54 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 21:27:36 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

void				ft_putchar(char c);

int					main(int argc, char **argv)
{
	struct s_stock_par	*stock;

	stock = ft_param_to_tab(argc, argv);
	ft_show_tab(stock);
	return (0);
}
