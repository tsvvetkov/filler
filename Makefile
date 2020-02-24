# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcomic <pcomic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 19:41:13 by yshawn            #+#    #+#              #
#    Updated: 2020/02/24 05:56:15 by pcomic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = pcomic.filler
HEADER = include/filler.h
LIB = my_libft/
PRINTLIB = my_printf/

DIR_S_1 = ./
DIR_S_2 = src
DIR_S_3 = ./my_printf/
DIR_S_4 = ./my_libft/
DIR_S_5 = ./my_gnl/

SOURCES_1 = main.c
SOURCES_2 = extra.c extra_2.c record_data.c solver.c
SOURCES_3 = libftprintf.a
SOURCES_4 = libft.a
SOURCES_5 = get_next_line.c

SRCS_1 = $(addprefix $(DIR_S_1)/,$(SOURCES_1))
SRCS_2 = $(addprefix $(DIR_S_2)/,$(SOURCES_2))
SRCS_3 = $(addprefix $(DIR_S_3)/,$(SOURCES_3))
SRCS_4 = $(addprefix $(DIR_S_4)/,$(SOURCES_4))
SRCS_5 = $(addprefix $(DIR_S_5)/,$(SOURCES_5))

all: $(NAME)
$(NAME):
	@make -C $(LIB)
	@make -C $(PRINTLIB)
	@$(CC) $(FLAGS) $(SRCS_1) $(SRCS_2) $(SRCS_3) $(SRCS_4) $(SRCS_5) -I $(HEADER) -o $(NAME)
clean:
	@make clean -C $(LIB)
	@make clean -C $(PRINTLIB)
	@rm -f filler.trace
fclean: clean
	@make fclean -C $(LIB)
	@make fclean -C $(PRINTLIB)
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re