* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 09:52:04 by djsy              #+#    #+#             */
/*   Updated: 2019/02/19 23:23:53 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//inclusion du prototype de la fonction putchar
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char buffer;

	buffer = 'a';//on initialise le buffer a la premiere lettre de l'alphabet
	while (buffer <= 'z')//on augmente le code ASCII associé a A de 1 jusqua arriver a Z
	{
		ft_putchar(buffer);//on affiche le character courant
		buffer++;//on passe au character suivant
	}
}
