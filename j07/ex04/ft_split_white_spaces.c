/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_spaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 07:21:33 by djsy              #+#    #+#             */
/*   Updated: 2019/02/25 05:45:01 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i],1);
		i++;
	}
}

void	words_len(char *str, int words_len[50])
{
	int i;
	int j;
	int word_index;

	i = 0;
	j = 1;
	word_index = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i + 1] == '\0')
			if (str[i - 1] > 32 && str[i - 1] < 127)
			{
				while (str[i - j] >= 33 && str[i - j] <= 126)
					j++;
				if (str[i + 1] == '\0')
					words_len[word_index] = j;
				else
					words_len[word_index] = j - 1;
				word_index++;
			}
		j = 1;
		i++;
	}
}

int		count_words(char *str, int word_len[50])
{
	int i;
	int j;
	int words;

	i = 0;
	j = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i - 1] >= 33 && str[i - 1] <= 126)
				words++;
		}
		i++;
	}
	words_len(str, word_len);
	return (words + 1);
}

char *ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != ' ' || src[len] != '\n')
		len++;
	dup = (char *)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		words;
	int		word_len[50];
	char	**parsed_string;

	i = 0;
	words = count_words(str, word_len);
	words_len(str, word_len);
	parsed_string = (char **)malloc(sizeof(char *) * (words + 1));
	while (i < words)
	{
		*parsed_string = (char *)malloc(sizeof(char) * (word_len[i] + 1));
		parsed_string[i] = ft_strdup(str);
			i++;
	}
	parsed_string[i][0] = '0';
	return (parsed_string);
}

int main()
{
	char *str = "mathieu sandana est batman";
	char *str2[];
	str2 = ft_split_whitespaces(str);
	printf("%s\n%s\n", str2[0], str2[1]);
	return (0);
}
