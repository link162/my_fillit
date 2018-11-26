/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_baze.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:16:48 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/26 13:29:58 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_tetris	*what_now()
{
	t_tetris *new;

	new = g_list;
	while (new)
	{
		if (new->is_put == 0)
			return (new);
		new = new->next;
	}
	return (NULL);
}

int		fill_tetris(char field[][g_field_size], int y, int x)
{
	t_tetris *list;

	if (!(list = what_now()))
		return (0);
	if (x >= g_field_size)
		return (fill_tetris(field, y + 1, 0));
	if (field[y][x] == '.')
		if (avalible(field, y, x, list))
			list->is_put = 1;
//add_to_global(list);
	if (y == g_field_size - 1 && x == g_field_size - 1) 
		return (1);
		//	return (step_back(field, y, x, list);
	return (fill_tetris(field, y, x + 1));
}

int		backtracking(void)
{
	int i;
	int j;

	i = 0;
	char	field[g_field_size][g_field_size];
	while (i < g_field_size)
	{
		j = 0;
		while (j < g_field_size)
			field[i][j++] = '.';
		i++;
	}
	i = fill_tetris(field, 0, 0);
	if (!i)
		print_field(field);
	return (i);
}

int		find_size(int i)
{
	while (!ft_sqrt(i))
		i++;
	return (ft_sqrt(i));
}

void	create_data_baze(void)
{
	int i;

	i = 1;
	g_field_size = find_size(g_count * 4);
	while (i)
	{
		i = backtracking();
		list_to_null();
		g_field_size++;
	}
}
