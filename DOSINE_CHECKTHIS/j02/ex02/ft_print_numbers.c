/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 23:46:01 by djsy              #+#    #+#             */
/*   Updated: 2019/02/09 23:46:10 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//meme chose aue l'exercice d'avant, but with numbers
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
