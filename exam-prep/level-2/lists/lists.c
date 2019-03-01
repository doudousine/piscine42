/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djsy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 07:59:00 by djsy              #+#    #+#             */
/*   Updated: 2019/03/01 09:01:27 by djsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
i
#include <stdlib.h>
#include <stdio.h>

typedef struct s_test_list t_test_list;

struct s_test_list
{
	char *str;
	t_list *next;
}t_list;

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;
	tmp = malloc(sizeof(tmp));
	if(tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return tmp;
}

void print_list(struct s_test_list *list)
{
	while(list)
	{
		printf("%s\n",t_list.str);
		list = list.next;
	}
}

int main()
{
	t_list *list;

	list = NULL;
	list = add_link(list, "chaine de test");
	list = add_link(list, "chaine 2");
	print_list(list);
	return (0);
}
