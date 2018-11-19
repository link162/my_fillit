/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:40:18 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/19 12:59:45 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	t_tetris	*ft_create_elem(void *data)
{
	t_tetris	*list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	ft_list_push_back(t_tetris **begin_list, void *data)
{
	t_tetris	*list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

void	ft_list_push_front(t_tetris **begin_list, void *data)
{
	t_tetris	*list;

	if (*begin_list)
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(data);
}

int		ft_list_size(t_tetris *begin_list)
{
	t_tetris	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

t_tetris	*ft_list_last(t_tetris *begin_list)
{
	t_tetris	*list;

	list = begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		return (list);
	}
	return (NULL);
}
