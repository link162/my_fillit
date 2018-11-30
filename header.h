/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:19:07 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/27 13:40:51 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/includes/libft.h"
# include <fcntl.h>

typedef struct		s_tetris
{
	struct s_tetris	*next;
	int				number;
	int				figure;
	int				is_put;
}					t_tetris;

t_tetris			*g_list;
t_tetris			*g_reverse;
int					g_to_put;
int					g_count;
int					g_field_size;
t_tetris			*ft_create_elem(int figure, int number);
void				ft_list_push_back(t_tetris **b, int f, int number);
void				ft_list_push_front(int f, int number);
t_tetris			*ft_list_last(t_tetris *begin_list);
int					ft_list_size(t_tetris *begin_list);
int					figure_1(char *str);
void				list_to_null(void);
void				create_data_baze(void);
void				del_revers(void);
void				add_to_global(t_tetris *list);
int					step_back(char field[][g_field_size], t_tetris *list);
int					fill_tetris(char field[][g_field_size], int y, int x);
int					clear_f(char field[][g_field_size],
					t_tetris *to_del, int to_put);
int					avalible(char field[][g_field_size],
					int y, int x, t_tetris *l);
int					try_figure_1(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_2(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_3(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_4(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_5(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_6(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_7(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_8(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_9(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_10(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_11(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_12(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_13(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_14(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_15(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_16(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_17(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_18(char field[][g_field_size],
					int y, int x, int number);
int					try_figure_19(char field[][g_field_size],
					int y, int x, int number);
void				print_field(char field[][g_field_size]);

#endif
