# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/17 15:05:10 by ybuhai            #+#    #+#              #
#    Updated: 2018/12/09 14:52:59 by ybuhai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror
FILES = main.c find_figures.c data_baze.c backtrack.c find_free_place1.c find_free_place6.c find_free_place11.c find_free_place16.c
OBJECT = $(FILES:.c=.o)

$(NAME) : $(OBJECT)
	@gcc $(FLAGS) -c $(FILES)
	@gcc -o $(NAME) $(OBJECT)

all: $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean clean re
