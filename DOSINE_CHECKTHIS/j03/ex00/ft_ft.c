/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 10:50:12 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 11:13:13 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//UN POINTEUR est un OUTIL qui permet d'acceder a une variable "a distance"
//c'est a dire depuis une autre fonction, en sauvant les changements
//
//un pointeur est representé par '*' est signifie
//que l'on accede a la variable apres le '*'

void	ft_ft(int *nbr)//cette fonction recoit un POINTEUR sur la variable NBR
			//qui est defini somewhere
{
	*nbr = 42; //on assigne 42 a cette variable par le biais du pointeur
		   //represente par '*'
}
