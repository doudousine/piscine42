/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 00:10:45 by djsy              #+#    #+#             */
/*   Updated: 2019/02/26 11:16:40 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
		return ((int)NULL);
	*range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
