/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 22:00:32 by djsy              #+#    #+#             */
/*   Updated: 2019/02/20 15:46:32 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int strlen;

	i = 0;
	j = 0;
	strlen = 0;
	while (to_find[strlen])
		strlen++;
	if (strlen == 0)
		return (0);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == strlen - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
