/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:19:32 by djsy              #+#    #+#             */
/*   Updated: 2019/02/12 12:18:09 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkchar(char *str, int i)
{
	while ((&str[i] == ' ') || (&str[i] == '\t') || (&str[i] == '\n'))
	{
		if ((&str[i] == '\v') || (&str[i] == '\f') || (&str[i] == '\r'))
			i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int	number;
	int flagnegatif;

	i = 0;
	flagnegatif = 0;
	number = 0;
	i = checkchar(&str, i);
	if (str[i] == 45 && (str[i + 1] >= 48 || str[i + 1] <= 57))
		flagnegatif = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (flagnegatif == 1)
		return (-number);
	else
		return (number);
}
