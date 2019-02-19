/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 18:17:13 by djsy              #+#    #+#             */
/*   Updated: 2019/02/19 13:49:20 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		result = s2[i] - s1[i];
		i++;
	}
	return (s1[i] - s2[i]);
}
