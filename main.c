/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 12:48:39 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/29 14:15:31 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		validate_box(char *str, int i)
{
	int hash;
	int j;
	int x;

	hash = 0;
	x = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (str[x] != '.' && str[x] != '#')
				return (-1);
			if (str[x] == '#')
				hash++;
			x++;
			j++;
		}
		if (str[x] == '\n')
			x++;
		i++;
	}
	if (hash != 4 || (str[x] != '\n' && str[x] != '\0'))
		return (-1);
	return (x);
}

void	find_figure(char *str)
{
	int nb;
	int i;
	int fig;

	i = 0;
	nb = 0;
	while (nb < g_count)
	{
		fig = figure_1(&str[i]);
		if (fig < 1)
		{
			ft_putendl("error");
			return ;
		}
		ft_list_push_back(&g_list, fig, nb);
		i += 21;
		nb++;
	}
	create_data_baze();
}

void	ft_validate(char *str)
{
	int i;
	int j;
	int count;

	count = 0;
	j = 0;
	i = 0;
	while (1)
	{
		j = validate_box(&str[i], 0);
		if (j == -1)
		{
			ft_putendl("error file");
			return ;
		}
		i += j;
		count++;
		if (str[i] == '\0')
			break ;
		else if (str[i] == '\n')
			i++;
	}
	g_count = count;
	find_figure(str);
}

void	ft_read_file(int fd)
{
	char	str[551];
	int		i;

	i = read(fd, str, 550);
	str[i] = '\0';
	ft_validate(str);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			ft_putendl("error");
		else
			ft_read_file(fd);
	}
	else
		ft_putendl("usage: ./fillit file_name");
}
