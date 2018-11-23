/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_free_place6.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:51:14 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/23 16:41:52 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		try_figure_6(char field[][g_field_size], int y, int x)
{
	if (y + 3 < g_field_size)
		if (field[y + 1][x] == '.')
			if (field[y + 2][x] == '.')
				if (field[y + 3][x] == '.')
				{
					field[y][x] = g_letter;
					field[y + 1][x] = g_letter;
					field[y + 2][x] = g_letter;
					field[y + 3][x] = g_letter;
					g_letter++;
					return (1);
				}
	return (0);
}

int		try_figure_7(char field[][g_field_size], int y, int x)
{
	if (x + 1 < g_field_size)
		if (field[y][x + 1] == '.')
			if (y + 1 < g_field_size)
				if (field[y + 1][x] == '.')
					if (field[y + 1][x + 1] == '.')
					{
						field[y][x] = g_letter;
						field[y][x + 1] = g_letter;
						field[y + 1][x] = g_letter;
						field[y + 1][x + 1] = g_letter;
						g_letter++;
						return (1);
					}
	return (0);
}

int		try_figure_8(char field[][g_field_size], int y, int x)
{
	if (x + 1 < g_field_size)
		if (field[y][x + 1] == '.')
			if (y + 2 < g_field_size)
				if (field[y + 1][x + 1] == '.')
					if (field[y + 2][x + 1] == '.')
					{
						field[y][x] = g_letter;
						field[y][x + 1] = g_letter;
						field[y + 1][x + 1] = g_letter;
						field[y + 2][x + 1] = g_letter;
						g_letter++;
						return (1);
					}
	return (0);
}

int		try_figure_9(char field[][g_field_size], int y, int x)
{
	if (y + 1 > g_field_size)
		if (field[y + 1][x] == '.')
			if (x > 1)
				if (field[y + 1][x - 1] == '.')
					if (field[y + 1][x - 2] == '.')
					{
						field[y][x] = g_letter;
						field[y + 1][x] = g_letter;
						field[y + 1][x - 1] = g_letter;
						field[y + 1][x - 2] = g_letter;
						g_letter++;
						return (1);
					}
	return (0);
}

int		try_figure_10(char field[][g_field_size], int y, int x)
{
	if (y + 2 < g_field_size)
		if (field[y + 1][x] == '.')
			if (field[y + 2][x] == '.')
				if (x + 1 < g_field_size)
					if (field[y + 2][x + 1] == '.')
					{
						field[y][x] = g_letter;
						field[y + 1][x] = g_letter;
						field[y + 2][x] = g_letter;
						field[y + 2][x + 1] = g_letter;
						g_letter++;
						return (1);
					}
	return (0);
}
