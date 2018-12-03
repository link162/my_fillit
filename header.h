/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:19:07 by ybuhai            #+#    #+#             */
/*   Updated: 2018/12/03 16:41:26 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/includes/libft.h"
# include <fcntl.h>

int		*g_arr;
int		g_count;
int		g_field_size;
int		figure_1(char *str);
void	create_data_baze(void);
int		avalible(char field[][g_field_size], int y, int x, int figure);
int		try_figure_1(char field[][g_field_size], int y, int x, int n);
int		try_figure_2(char field[][g_field_size], int y, int x, int n);
int		try_figure_3(char field[][g_field_size], int y, int x, int n);
int		try_figure_4(char field[][g_field_size], int y, int x, int n);
int		try_figure_5(char field[][g_field_size], int y, int x, int n);
int		try_figure_6(char field[][g_field_size], int y, int x, int n);
int		try_figure_7(char field[][g_field_size], int y, int x, int n);
int		try_figure_8(char field[][g_field_size], int y, int x, int n);
int		try_figure_9(char field[][g_field_size], int y, int x, int n);
int		try_figure_10(char field[][g_field_size], int y, int x, int n);
int		try_figure_11(char field[][g_field_size], int y, int x, int n);
int		try_figure_12(char field[][g_field_size], int y, int x, int n);
int		try_figure_13(char field[][g_field_size], int y, int x, int n);
int		try_figure_14(char field[][g_field_size], int y, int x, int n);
int		try_figure_15(char field[][g_field_size], int y, int x, int n);
int		try_figure_16(char field[][g_field_size], int y, int x, int n);
int		try_figure_17(char field[][g_field_size], int y, int x, int n);
int		try_figure_18(char field[][g_field_size], int y, int x, int n);
int		try_figure_19(char field[][g_field_size], int y, int x, int n);
void	print_field(char field[][g_field_size]);

#endif
