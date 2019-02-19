/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:22:41 by djsy              #+#    #+#             */
/*   Updated: 2019/02/15 19:37:02 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int len1;
	int len2;

	i = 0;
	len1 = 0;
	len2 = 0;
	while (dest[len1])
		len1++;
	while (src[i])
	{
		dest[len1] = src[i];
		len1++;
		i++;
	}
	dest[len1] = '\0';
	return (dest);
}
