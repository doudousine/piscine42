/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:40:46 by djsy              #+#    #+#             */
/*   Updated: 2019/02/14 14:49:17 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkentier(float nb)
{
	float result;

	result = nb - (int)nb;
	if (result == 0)
		return (1);
	else
		return (0);
}

int		ft_sqrt(int nb)
{
	float x;
	float y;
	float e;

	x = nb;
	y = 1;
	e = 0.1;
	if (nb < 0 || nb > 2147483647)
		return (0);
	while (x - y > e)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (checkentier(x))
		return (x);
	else
		return (0);
}
