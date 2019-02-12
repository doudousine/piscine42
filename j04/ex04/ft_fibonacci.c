/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:49:01 by djsy              #+#    #+#             */
/*   Updated: 2019/02/12 14:39:30 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return(ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}