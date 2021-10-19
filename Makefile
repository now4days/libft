# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdark <mdark@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 12:23:45 by mdark             #+#    #+#              #
#    Updated: 2021/10/19 14:24:27 by mdark            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_bzero.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		

OBJS = ${SRCS:.c=.o}

OBJSB = ${SRCSB: .c=.o}

INCLUDE = ./

CC = gcc

CFLAGS = -Wextra -Wall -Werror

%.o:%.c libft.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all:	${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

bonus:		${OBJS} ${OBJSB}
			ar rc ${NAME} ${OBJS} ${OBJSB}
clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re