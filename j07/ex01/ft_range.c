/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:11:36 by djsy              #+#    #+#             */
/*   Updated: 2019/02/21 16:03:57 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range = NULL;
	int i;

	i = 0;
	if (min >= max)
		return (range);
	else
		range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
