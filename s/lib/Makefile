# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 04:30:26 by mrital-           #+#    #+#              #
#    Updated: 2023/03/20 19:56:29 by mrital-          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = \
	ft_strlen.c \
	ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
	ft_strdup.c ft_substr.c ft_strjoin.c  \
	ft_itoa.c ft_bzero.c ft_calloc.c\
	ft_split.c ft_strtrim.c \
	ft_dprintf.c ft_memset.c\

OBJS = ${SRCS:.c=.o}


.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $?

bonus: $(OBJS)
	$(AR) rcs $(NAME) $?

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all