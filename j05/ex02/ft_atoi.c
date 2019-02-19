/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:07:56 by djsy              #+#    #+#             */
/*   Updated: 2019/02/14 21:38:35 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int	number;
	int flagnegatif;

	flagnegatif = 1;
	i = 0;
	number = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	if (str[i - 1] == 45)
		flagnegatif = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (flagnegatif * number);
}
