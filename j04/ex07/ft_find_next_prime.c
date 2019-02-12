/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 20:41:37 by djsy              #+#    #+#             */
/*   Updated: 2019/02/12 20:46:26 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int number)
{
    int mod;
    int i;

    i = 2;
    if (number <= 1)
        return(0);
    while(i < number / 2)
    {
        mod = number % i;
        if(mod == 0)
            return(0);
        i++;
    }
    return(1);
}

int ft_find_next_prime(int number)
{
    if(number <= 1)
        return(0);
    while(ft_is_prime(number))
            number++;
    return(number);
}
