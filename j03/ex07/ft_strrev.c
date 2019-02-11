/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 21:50:06 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 21:50:48 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	char	recipient;

	count = 0;
	size = 0;
	while (str[size])
		size++;
	size--;
	while (count < size)
	{
		recipient = str[size];
		str[size] = str[count];
		str[count] = recipient;
		count++;
		size--;
	}
	return (str);
}
