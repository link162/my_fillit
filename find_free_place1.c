/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_free_place1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:51:04 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/24 17:04:43 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		try_figure_1(char field[][g_field_size], int y, int x, int number)
{
	if (x + 1 < g_field_size)
		if (field[y][x + 1] == '.')
			if (y + 2 < g_field_size)
				if (field[y + 1][x] == '.')
					if (field[y + 2][x] == '.')
					{
						field[y][x] = number + 65;
						field[y][x + 1] = number + 65;
						field[y + 1][x] = number + 65;
						field[y + 2][x] = number + 65;
						return (1);
					}
	return (0);
}

int		try_figure_2(char field[][g_field_size], int y, int x, int number)
{
	if (y + 1 < g_field_size)
		if (field[y + 1][x] == '.')
			if (x + 2 < g_field_size)
				if (field[y + 1][x + 1] == '.')
					if (field[y + 1][x + 2] == '.')
					{
						field[y][x] = number + 65;
						field[y + 1][x] = number + 65;
						field[y + 1][x + 1] = number + 65;
						field[y + 1][x + 2] = number + 65;
						return (1);
					}
	return (0);
}

int		try_figure_3(char field[][g_field_size], int y, int x, int number)
{
	if (y + 2 < g_field_size)
		if (field[y + 1][x] == '.')
			if (field[y + 2][x] == '.')
				if (x > 0)
					if (field[y + 2][x - 1] == '.')
					{
						field[y][x] = number + 65;
						field[y + 1][x] = number + 65;
						field[y + 2][x] = number + 65;
						field[y + 2][x - 1] = number + 65;
						return (1);
					}
	return (0);
}

int		try_figure_4(char field[][g_field_size], int y, int x, int number)
{
	if (x + 2 < g_field_size)
		if (field[y][x + 1] == '.')
			if (field[y][x + 2] == '.')
				if (y + 1 < g_field_size)
					if (field[y + 1][x + 2] == '.')
					{
						field[y][x] = number + 65;
						field[y][x + 1] = number + 65;
						field[y][x + 2] = number + 65;
						field[y + 1][x + 2] = number + 65;
						return (1);
					}
	return (0);
}

int		try_figure_5(char field[][g_field_size], int y, int x, int number)
{
	if (x + 3 < g_field_size)
		if (field[y][x + 1] == '.')
			if (field[y][x + 2] == '.')
				if (field[y][x + 3] == '.')
				{
					field[y][x] = number + 65;
					field[y][x + 1] = number + 65;
					field[y][x + 2] = number + 65;
					field[y][x + 3] = number + 65;
					return (1);
				}
	return (0);
}
