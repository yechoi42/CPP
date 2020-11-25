# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/25 17:42:24 by yechoi            #+#    #+#              #
#    Updated: 2020/11/25 17:42:24 by yechoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp

OBJS		=	$(SRCS:.c=.o)

CC			=	clang++

FLAG		= 	-Wall -Wextra -Werror

INCLUDES	= 	-I ./

NAME		=	convert

$(NAME)		:	all

all			: $(OBJS)
		$(CC) $(FLAC) $(SRCS) $(INCLUDES) -o $(NAME)

clean		:
		rm -rf $(OBJS)

fclean		: clean
		rm -rf $(NAME)

re			: fclean clean

.PHONY 		: all clean fclean re