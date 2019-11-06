/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:19:32 by djsy              #+#    #+#             */
/*   Updated: 2019/02/13 10:50:32 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//FONCTION PHARE DE LA PISCINE
//"converti" un nombre passe sous forme de chaine de character, en entier
//lis le man de atoi (shell >> man atoi) pour mieux comprendre
//
int		checkchar(char *str, int i) //simple fonction qui retounr i si le charactere str[i]
						//est un espace, tab, etc... (lis le man)
{
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
	{
		if ((str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
			i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i; //index de parcours
	int	number; //nombre converti
	int flagnegatif; //flag pour le signe du nombre

	i = 0;
	flagnegatif = 0;
	number = 0;
	i = checkchar(str, i); //on va chercher le premier caractere valide (lis le man)
	if (str[i] == 45 && (str[i + 1] >= 48 || str[i + 1] <= 57)) //si le caractere suivant est un '-'
		flagnegatif = 1;
	if ((str[i] == 45) || (str[i] == 43)) //si le character suivant est un '+'
		i++;
	while (str[i] >= 48 && str[i] <= 57) //tant que les character suivant sont entre 0 et 9 (donc des chiffres)
	{
		number *= 10; //notation equivalente a number = number * 10
				//BIG MATH, on cree simplement par x10 successif a chiffre decomposé qu'on va recomposer
		number += ((int)str[i] - 48); //en ajoutant chaque digit, qu'on converti grace a un CAST de char(str[) vers INT (int)str[]
		i++;//exemple 467 : 4 x 10 ; 40 + 6 *10; 460 + 7; = 467

		//BTW; str[i] - 48 est un trick base sur la TABLE ASCII, google hoz to convert char to int using ASCII TABLE
	}
	if (flagnegatif == 1)
		return (-number);
	else
		return (number);
}
