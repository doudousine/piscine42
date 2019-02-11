/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 13:29:54 by djsy              #+#    #+#             */
/*   Updated: 2019/02/10 14:04:50 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int recipient1;
	int recipient2;

	recipient1 = *a / *b;
	recipient2 = *a % *b;
	*a = recipient1;
	*b = recipient2;
}
