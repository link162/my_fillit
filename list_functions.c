/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:40:18 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/27 13:42:49 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_tetris		*ft_create_elem(int figure, int number)
{
	t_tetris	*lst;

	lst = NULL;
	lst = malloc(sizeof(t_tetris));
	if (lst)
	{
		lst->figure = figure;
		lst->number = number;
		lst->is_put = 0;
		lst->next = NULL;
	}
	return (lst);
}

void			ft_list_push_back(t_tetris **begin_list, int figure, int number)
{
	t_tetris	*lst;

	lst = *begin_list;
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		lst->next = ft_create_elem(figure, number);
	}
	else
		*begin_list = ft_create_elem(figure, number);
}

void			ft_list_push_front(int figure, int number)
{
	t_tetris	*list;

	if (g_reverse)
	{
		list = ft_create_elem(figure, number);
		list->next = g_reverse;
		g_reverse = list;
	}
	else
		g_reverse = ft_create_elem(figure, number);
}

void			list_to_null(void)
{
	t_tetris *new;

	new = g_list;
	while (new)
	{
		new->is_put = 0;
		new = new->next;
	}
}
