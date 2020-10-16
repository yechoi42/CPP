# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 20:12:23 by yechoi            #+#    #+#              #
#    Updated: 2020/10/15 20:22:06 by yechoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS	= phonebook.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++

FLAG	= -Wall -Wextra -Werror

$(NAME)	:
	clang++ $(FLAG) $(SRCS) -o $(NAME) 

clean	: 
	rm -rf $(OBJS)


fclean	: clean
	rm -rf $(NAME)

re		: fclean all