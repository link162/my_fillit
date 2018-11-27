/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:44:13 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/27 13:35:13 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	del_revers(void)
{
	t_tetris *new;

	while (g_reverse)
	{
		new = g_reverse->next;
		free(g_reverse);
		g_reverse = NULL;
		g_reverse = new;
	}
}

void	del_letter(int number, char field[][g_field_size])
{
	int i;
	int j;
	t_tetris *new;

	new = g_list;
	while (new)
	{
		if (new->number == number)
		{
			new->is_put = 0;
			break ;
		}
		new = new->next;
	}
	i = 0;
	number += 65;
	while (i < g_field_size)
	{
		j = 0;
		while (j < g_field_size)
		{
			if (field[i][j] == number)
				field[i][j] = '.';
			j++;
		}
		i++;
	}
}

int		clear_f(char field[][g_field_size], t_tetris *to_del, int to_put)
{
	t_tetris *new;

	g_to_put = to_put;
	new = g_reverse;
	while (new->number != to_del->number)
	{
		del_letter(new->number, field);
		g_reverse = new->next;
		free(new);
		new = NULL;
		new = g_reverse;
	}
	del_letter(new->number, field);
	g_reverse = new->next;
	free(new);
	new = NULL;
	return (fill_tetris(field, 0, 0));
}
