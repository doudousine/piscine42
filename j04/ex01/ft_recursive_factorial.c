/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:00:53 by djsy              #+#    #+#             */
/*   Updated: 2019/02/11 14:44:17 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int fct;

	fct=nb;
	if(nb <= 0 || nb > 12 )
		return (0);
	if(nb == 1)
		return(1);
	return(nb * ft_recursive_factorial(nb - 1));
}
