/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:51:29 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 13:00:56 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// comment intervertir le contenu de deux verres sans que leur contenu se melange ?
// on prend un troisieme verre temporaire
// et ici c'est "recipient"
void	ft_swap(int *a, int *b)
{
	int recipient;

	recipient = *a; //recipient prends la valeur de A via un pointeur
	*a = *b; //A prend la valeur de  B via un pointeur
	*b = recipient; //et B prend la valeur du recipient, via un pointeur
}
