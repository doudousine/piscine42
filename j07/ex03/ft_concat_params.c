/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:20:05 by djsy              #+#    #+#             */
/*   Updated: 2019/02/24 23:56:14 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int size;
	char *current_arg;
	char *args;

	i = 0;
	size = 0;
	while (i < argc)
	{
		current_arg = argv[i];
		while (current_arg[size])
			size++;
		i++;
	}
	size = j;
	i = 0;
	j = 0;
	args = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		current_arg = argv[i];
		while (current_arg[i])
		{
			args[j] = current_arg[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (args);
}
