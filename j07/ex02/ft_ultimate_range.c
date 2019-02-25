/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 00:10:45 by djsy              #+#    #+#             */
/*   Updated: 2019/02/25 03:05:07 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    ft_ultimate_range(int **range, int min, int max)
{
    int    i;
    int    *tab;
    
    i = 0;
    tab = (int*)malloc(sizeof(int) * (max - min));
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    *range = tab;
    return (i);
}
