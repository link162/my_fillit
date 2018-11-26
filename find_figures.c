/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_figures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:36:22 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/26 14:03:58 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		g_like_figure(char *str, int i)
{
	if (str[i + 5] == '#')
		return (1);
	else if (str[i - 1] == '#')
		return (18);
	return (0);
}

int		two_long_hash(char *str, int i)
{
	if (str[i + 1] == '#')
	{
		if (str[i + 2] == '#')
			return (5);
		else if (str[i + 6] == '#')
			return (4);
		else if (str[i + 4] == '#')
			return (11);
		else if (str[i + 5] == '#')
			return (14);
	}
	else if (str[i + 5] == '#')
	{
		if (str[i + 6] == '#')
			return (16);
		else if (str[i + 10] == '#')
			return (8);
		else if (str[i + 4] == '#')
			return (7);
	}
	else if (str[i + 4] == '#')
		return (g_like_figure(str, i + 4));
	return (0);
}

int		l_like_figure(char *str, int i)
{
	if (str[i + 5] == '#')
		return (17);
	else if (str[i - 1] == '#')
		return (9);
	return (0);
}

int		two_vertical_hash(char *str, int i)
{
	if (str[i + 1] == '#')
	{
		if (str[i + 2] == '#')
			return (2);
		else if (str[i + 6] == '#')
			return (19);
		else if (str[i + 5] == '#')
			return (13);
		else if (str[i - 1] == '#')
			return (12);
	}
	else if (str[i + 5] == '#')
	{
		if (str[i + 4] == '#')
			return (3);
		else if (str[i + 10] == '#')
			return (6);
		else if (str[i - 1] == '#')
			return (15);
		else if (str[i + 6] == '#')
			return (10);
	}
	else if (str[i - 1] == '#')
		return (l_like_figure(str, i - 1));
	return (0);
}

int		figure_1(char *str)
{
	int i;

	i = 0;
	while (str[i] != '#' && i < 20)
		i++;
	if (str[i] == '#' && str[i + 1] == '#')
		return (two_long_hash(str, i + 1));
	else if (str[i] == '#' && str[i + 5] == '#')
		return (two_vertical_hash(str, i + 5));
	return (0);
}
