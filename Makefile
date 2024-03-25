# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 17:31:46 by kdvarako          #+#    #+#              #
#    Updated: 2024/03/18 17:43:14 by kdvarako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar rcs

SRC = ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
		ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
		ft_bzero.c	ft_memchr.c	ft_putstr_fd.c	ft_strlen.c	ft_toupper.c \
		ft_calloc.c	ft_memcmp.c ft_split.c ft_strmapi.c \
		ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
		ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
		ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
		ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c

OBJ = ${SRC:%.c=%.o}

CC = cc

CFlAGS = -Wall -Wextra -Werror

HEADER = libft.h


all:	${NAME}

%.o: %.c 	${HEADER}
	${CC} ${CFlAGS} -c $< -o $@

${NAME}:	${OBJ}
	${AR} ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re