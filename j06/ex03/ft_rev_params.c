/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:12:34 by djsy              #+#    #+#             */
/*   Updated: 2019/02/20 18:18:16 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*current_arg;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		current_arg = argv[i];
		while (current_arg[j])
		{
			ft_putchar(current_arg[j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i--;
	}
	return (0);
}
