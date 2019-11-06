/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 14:06:26 by djsy              #+#    #+#             */
/*   Updated: 2019/02/12 12:09:57 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//IMPORTANT NOTION
//les chaines de characters
//sont des characters COLLES les UNS A LA SUITE DES AUTRES en MEMOIRE
//supposons aue ceci est la memoire [][][][][][][][][][][][]
//alors ceci est une chaine de char [h][e][l][l][o][w][o][r][l][d][!][\0]
//TOUTES LES CHAINES DE CHARACTERES sont termines par un character caché '\0'
//IL marque la fin de la chaine, et ne compte pas dans sa taille, mais il existe
//pour parcourir une chaine de caractere, il faut passer sur chaque caractere un par un
//a laide d'une boucle

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;//index pour la boucle
	while (str[i]) // NOTATION EQUIVALENT A while (str[i] != '\0')
			// Cette notation (str[i]) est en fait un test booleen (vrai, faux).
			// les zones comme while() et if()
			// sont des zones de test booleenes
			// donc while (str[i]) est testé et puisque '\0' est equivalent a ZERO(0) donc FAUX
			// c'est un raccourci pour dire while (str[i] == '\0')
	{
		ft_putchar(str[i]); //on affiche le caractere numero i de la chaine str
		i++;
	}
}
