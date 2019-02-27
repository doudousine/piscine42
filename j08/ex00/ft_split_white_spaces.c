/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_spaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:36:16 by djsy              #+#    #+#             */
/*   Updated: 2019/02/27 16:06:49 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dup;
	int		i;

	size = 0;
	while (src[size] != '\0' && src[size] != '  '
	&& src[size] != '\n' && src[size] != '\t')
		size++;
	dup = (char*)malloc(sizeof(*dup) * size + 1);
	if (dup == 0)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != '\n'
	&& src[i] != '\t' && src[i] != ' ')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int		is_new_word(char *str, int i)
{
	if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') &&
	((i == 0) || (i != 0 && (str[i - 1] == ' '
	|| str[i - 1] == '\t' || str[i - 1] == '\n'))))
		return (1);
	else
		return (0);
}

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (is_new_word(str, i))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	char	**parsed_string;
	int		index;
	int		i;

	index = 0;
	i = 0;
	parsed_string = (char**)malloc(sizeof(char*) * ft_count_words(str) + 1);
	if (parsed_string == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		if (is_new_word(str, i))
		{
			parsed_string[index] = ft_strdup(str + i);
			index++;
		}
		i++;
	}
	parsed_string[index] = (char*)malloc(sizeof(char*));
	parsed_string[index] = 0;
	return (parsed_string);
}
