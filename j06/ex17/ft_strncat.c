/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:39:54 by djsy              #+#    #+#             */
/*   Updated: 2019/02/15 19:41:44 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int len1;
	int len2;

	i = 0;
	len1 = 0;
	len2 = 0;
	while (dest[len1])
		len1++;
	while (src[i] && i < nb)
	{
		dest[len1] = src[i];
		len1++;
		i++;
	}
	dest[len1] = '\0';
	return (dest);
}
