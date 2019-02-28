/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:22:35 by djsy              #+#    #+#             */
/*   Updated: 2019/02/28 18:53:15 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_atoi(char *str)
{
	int i;
	int nb = 0;

	i = 0;
	while(str[i] < 33 || str[i] > 126)
		i++;
	if(str[i] == '-' || str[i] == '+')
		i++;
	if(str[i] == '-')
		nb = -nb;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return nb;
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%i\n",ft_atoi(av[1]));
	return 0;
}
