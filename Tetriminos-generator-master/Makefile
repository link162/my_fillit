# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/16 14:27:46 by glarivie          #+#    #+#              #
#    Updated: 2018/11/16 17:40:03 by ybuhai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= tetri-gen
SRCS 	= srcs/main.c	srcs/ft_blk_rot.c	srcs/ft_rand.c	srcs/ft_atoi.c	\
		  srcs/ft_isdigit.c		srcs/ft_isspace.c	\

INC		= ./includes
FLAGS	= -Wall -Wextra -Werror
CC		= gcc

all: $(NAME)

$(NAME):
	@echo ""
	@$(CC) $(FLAGS) -o $(NAME) $(SRCS) -I$(INC)
	@echo "Création de $(NAME)"

clean:
	rm -f $(NAME)

re: clean all
