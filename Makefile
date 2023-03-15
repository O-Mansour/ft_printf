# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 05:01:15 by omansour          #+#    #+#              #
#    Updated: 2022/11/19 22:15:17 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_put_fcts1.c ft_put_fcts2.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -rf

AR = ar -rc

all : ${NAME}

clean :
	${RM} ${OBJS}

${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all