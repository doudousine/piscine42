/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:11:36 by djsy              #+#    #+#             */
/*   Updated: 2019/02/26 07:12:21 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	range = NULL;
	if (min >= max)
		return (range);
	if (!(range = (int *)malloc(sizeof(int) * (max - min))))
		return ((int *)0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
