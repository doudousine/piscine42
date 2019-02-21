/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:06:52 by djsy              #+#    #+#             */
/*   Updated: 2019/02/21 16:16:04 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int min, int max)
{
	int *range = NULL;
	unsigned int i;

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
	return (i);
}
