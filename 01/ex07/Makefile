# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 12:51:47 by yechoi            #+#    #+#              #
#    Updated: 2020/10/29 16:28:46 by yechoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace

SRCS	= main.cpp Sed.cpp

OBJS	= $(SRCS:.cpp=.o)

COMP	= clang++

FLAG	= -Wall -Wextra -Werror

all		: $(NAME)

$(NAME)	: $(OBJS)
		$(COMP) $(FLAG) -o $(NAME) $(OBJS)

%.o		: %.cpp
		$(COMP) $(FLAGS) -c $< -o $@ -I .

clean	:
		rm -rf $(OBJS) 
	
fclean	: clean
		rm -rf $(NAME) *.replace

re		: fclean all

.PHONY	: all, clean, fclean, re