# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/17 15:05:10 by ybuhai            #+#    #+#              #
#    Updated: 2018/11/27 12:57:23 by ybuhai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror
FILES = main.c list_functions.c list_functions1.c find_figures.c data_baze.c backtrack.c find_free_place1.c find_free_place6.c find_free_place11.c find_free_place16.c reverse_list.c
OBJECT = $(FILES:%.c=%.o)

$(NAME) :
	make -C libft/ fclean && make -C libft/
	clang -g3 -O0 -c $(FLAGS) $(FILES) -I includes
	clang -g3 -O0 -o $(NAME) $(OBJECT) -I libft -L libft/ -lft

all: $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re : fclean all
