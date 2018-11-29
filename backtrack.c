/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:13:35 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/29 13:28:15 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		avalible2(char field[][g_field_size], int y, int x, t_tetris *list)
{
	int figure;

	figure = list->figure;
	if (figure == 11)
		return (try_figure_11(field, y, x, list->number));
	else if (figure == 12)
		return (try_figure_12(field, y, x, list->number));
	if (figure == 13)
		return (try_figure_13(field, y, x, list->number));
	else if (figure == 14)
		return (try_figure_14(field, y, x, list->number));
	else if (figure == 15)
		return (try_figure_15(field, y, x, list->number));
	else if (figure == 16)
		return (try_figure_16(field, y, x, list->number));
	else if (figure == 17)
		return (try_figure_17(field, y, x, list->number));
	else if (figure == 18)
		return (try_figure_18(field, y, x, list->number));
	else if (figure == 19)
		return (try_figure_19(field, y, x, list->number));
	return (0);
}

int		avalible(char field[][g_field_size], int y, int x, t_tetris *list)
{
	int figure;

	figure = list->figure;
	if (figure == 1)
		return (try_figure_1(field, y, x, list->number));
	else if (figure == 2)
		return (try_figure_2(field, y, x, list->number));
	else if (figure == 3)
		return (try_figure_3(field, y, x, list->number));
	else if (figure == 4)
		return (try_figure_4(field, y, x, list->number));	
	else if (figure == 5)
		return (try_figure_5(field, y, x, list->number));
	else if (figure == 6)
		return (try_figure_6(field, y, x, list->number));
	else if (figure == 7)
		return (try_figure_7(field, y, x, list->number));
	else if (figure == 8)
		return (try_figure_8(field, y, x, list->number));
	else if (figure == 9)
		return (try_figure_9(field, y, x, list->number));
	else if (figure == 10)
		return (try_figure_10(field, y, x, list->number));
	return (avalible2(field, y, x, list));
}

void	print_field(char field[][g_field_size])
{
	int i;
	int j;

	i = 0;
	while (i < g_field_size)
	{
		j = 0;
		while (j < g_field_size)
		{
			ft_putchar(field[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	add_to_global(t_tetris *list)
{
	g_to_put = -1;
	list->is_put = 1;
	ft_list_push_front(list->figure, list->number);
}

int		step_back(char field[][g_field_size], t_tetris *list)
{
	t_tetris	*done_list;
	t_tetris	*done_list2;

	done_list = g_reverse;
	while (done_list)
	{
		if (list->number > done_list->number)
			return (clear_f(field, done_list, list->number));
		done_list2 = g_reverse;
		while (done_list2->number != done_list->number)
		{
			if (done_list2->number > done_list->number)
				return (clear_f(field, done_list, done_list2->number));
			done_list2 = done_list2->next;
		}
		done_list = done_list->next;
	}
		return (1); 
}
