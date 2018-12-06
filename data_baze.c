/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_baze.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:16:48 by ybuhai            #+#    #+#             */
/*   Updated: 2018/12/05 19:13:25 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	del_letter(int number, char field[][g_field_size])
{
	int			i;
	int			j;

	number += 65;
	i = 0;
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

int		fill_tetris(char field[][g_field_size], int nbr)
{
	int y;
	int x;

	y = 0;
	while (y < g_field_size)
	{
		x = 0;
		while (x < g_field_size)
		{
			if (field[y][x] == '.')
				if (avalible(field, y, x, nbr))
				{
					if (nbr + 1 < g_count)
						if (!(fill_tetris(field, nbr + 1)))
							return (0);
						else
							del_letter(nbr, field);
					else
						return (0);
				}
			x++;
		}
		y++;
	}
	return (1);
}

int		backtracking(void)
{
	int		i;
	int		j;
	char	field[g_field_size][g_field_size];

	i = 0;
	while (i < g_field_size)
	{
		j = 0;
		while (j < g_field_size)
			field[i][j++] = '.';
		i++;
	}
	i = fill_tetris(field, 0);
	if (!i)
		print_field(field);
	return (i);
}

int		find_size(int i)
{
	while (!kvadrat(i))
		i++;
	return (kvadrat(i));
}

void	create_data_baze(void)
{
	int i;
	int lol;

	i = 1;
	lol = g_count * 4;
	g_field_size = find_size(lol);
	while (i)
	{
		i = backtracking();
		g_field_size++;
	}
}
