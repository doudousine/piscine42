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
//je te laisse run ca dans python tutor
//ce programme renverse la chaine qu'on lui donne
char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	char	recipient;

	count = 0;
	size = 0;
	while (str[size]) // d'abord on recupere la taille
		size++;
	size--;//on tient compte de l'indice parce que les chaines commencent a[0]
	while (count < size) //python tutor this
	{
		recipient = str[size];
		str[size] = str[count];
		str[count] = recipient;
		count++;
		size--;
	}
	return (str);
}
