/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:53:27 by djsy              #+#    #+#             */
/*   Updated: 2019/02/20 15:19:31 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*current_arg;
	int		i;

	i = argc;
	i = 0;
	current_arg = argv[0];
	while (current_arg[i])
	{
		ft_putchar(current_arg[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
