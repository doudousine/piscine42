/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 14:49:56 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 21:51:19 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//programme qui compte le nombre de caractere dans une chaine
//exemple si la chaine str = "abc", ft_strlen retournera 4
//4 parce que strlen compte aussi le '\0' a la fin

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++; //QUAND il n'y a qu'une seule instruction dans un WHILE ou un IF
		//ON PEUT SAUTER les accolades, a condition de bien indenter
	return (i);
}
