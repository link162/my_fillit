/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 12:48:39 by ybuhai            #+#    #+#             */
/*   Updated: 2018/11/19 15:01:41 by iruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	open_file(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		ft_putendl("error");

}

int		main(int argc, char **argv)
{
	int fd;
	char *buf;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			ft_putendl("error");
		while(get_next_line(fd, &buf))
				printf("%s\n", buf);
	}
	else
		ft_putendl("usage: ./fillit file_name");
}
