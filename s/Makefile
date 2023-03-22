# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 14:38:50 by mrital-           #+#    #+#              #
#    Updated: 2023/03/21 22:39:39 by mrital-          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean all re fclean
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = pipex
SRC = access.c fork.c free.c pipex.c process.c staff.c
LIB_PATH = ./lib/libft.a

all: $(NAME)
	@echo "pipex : R E A D Y"
$(NAME):
	@make -C lib/
	@CC $(CFLAGS) -o $(NAME) $(SRC) $(LIB_PATH)

clean:
	@make clean -C lib/

fclean:
	@rm -f $(NAME)
	@make fclean -C lib/
	@echo "$(NAME) LMALIK MRITAL-"

re: fclean all