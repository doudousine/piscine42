/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 10:01:58 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/27 19:53:59 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

int					main(int argc, char **argv)
{
	struct s_stock_par	*tab;

	tab = ft_param_to_tab(argc, argv);
	
	(void)tab;
	return (0);
}
