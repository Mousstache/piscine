# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: motroian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 21:05:19 by motroian          #+#    #+#              #
#    Updated: 2022/08/31 21:05:48 by motroian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		=	./srcs/
HEAD_DIR	=	./includes/
SRCS		=	${SRC_DIR}ft_putchar.c\
				${SRC_DIR}ft_swap.c\
				${SRC_DIR}ft_putstr.c\
				${SRC_DIR}ft_strlen.c\
				${SRC_DIR}ft_strcmp.c
HEAD		=	${HAED_DIR}ft.h
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -I${HEAD_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc libft.a ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
