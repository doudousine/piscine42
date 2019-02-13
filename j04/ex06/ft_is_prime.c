/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:16:13 by djsy              #+#    #+#             */
/*   Updated: 2019/02/13 21:27:45 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int number)
{
	int mod;
	int i;

	i = 2;
	if (number <= 1)
		return (0);
	if (number == 2)
		return (1);
	if (number % 2 == 0 || number % 3 == 0)
		return (0);
	while (i < number / 2)
	{
		mod = number % i;
		if (mod == 0)
			return (0);
		i++;
	}
	return (1);
}
