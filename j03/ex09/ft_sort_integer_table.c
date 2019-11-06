/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 19:21:26 by djsy              #+#    #+#             */
/*   Updated: 2019/02/12 11:56:27 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//skip this unless you really have nothing else to do
//otherwsie, python tutor it
//
void	ft_swap(int *tab1, int *tab2)
{
	int recipient;

	recipient = 0;
	recipient = *tab1;
	*tab1 = *tab2;
	*tab2 = recipient;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				j = 0;
			}
		}
		i++;
	}
}
