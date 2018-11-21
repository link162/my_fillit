/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_baze.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:16:48 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/21 15:39:58 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		fill_tetris(void)
{
	char	field[g_field_size][g_field_size];
	

}

void	backtracking(void)
{
	int i;

	i = 1;
	while (i)
	{
		i = fill_tetris();
		g_field_size++;
	}
}

int		find_size(int i)
{
	while (!ft_sqrt(i))
		i++;
	return (ft_sqrt(i));
}

void	create_data_baze(void)
{
	int field;

	field = find_size(g_count * 4);
	g_field_size = field;
	backtracking();
}
