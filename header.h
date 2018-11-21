/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:19:07 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/21 15:57:44 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <fcntl.h>

typedef struct		s_tetris
{
	struct s_tetris	*next;
	int				number;
	int				figure;
	int				is_put;
}					t_tetris;

t_tetris			*list;

int					*g_arr;
int					g_count;
int					g_field_size;

t_tetris			*ft_create_elem(void *data);
void				ft_list_push_back(t_tetris **begin_list, void *data);
void				ft_list_push_front(t_tetris **begin_list, void *data);
t_tetris			*ft_list_last(t_tetris *begin_list);
int					ft_list_size(t_tetris *begin_list);
int					figure_1(char *str);
void				create_data_baze(void);
