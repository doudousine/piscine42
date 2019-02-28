/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:24:20 by djsy              #+#    #+#             */
/*   Updated: 2019/02/28 17:38:23 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *return_tab;
	int i;

	i = 0;
	return_tab = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		return_tab[i] = f(tab[i]);
		i++;
	}
	return (return_tab);
}
