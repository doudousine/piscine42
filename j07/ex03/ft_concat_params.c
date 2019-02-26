/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:20:05 by djsy              #+#    #+#             */
/*   Updated: 2019/02/26 11:13:41 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

char	*ft_display_params(char *string, char **argv, int argc)
{
	int		i;
	int		j;
	int		z;
	char	*current_arg;

	i = 0;
	j = 1;
	z = 0;
	while (i < argc)
	{
		current_arg = argv[i];
		while (current_arg[j])
		{
			string[z] = current_arg[j];
			j++;
			z++;
		}
		string[z] = '\n';
		z++;
		j = 0;
		i++;
	}
	string[z - 1] = '\0';
	return (string);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
			j++;
		i++;
	}
	if (!(string = malloc(sizeof(char) * j + 1)))
		return (NULL);
	string = ft_display_params(string, argv, argc);
	return (string);
}
