#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/18 11:17:11 by sdurr             #+#    #+#              #
#    Updated: 2014/08/18 15:32:24 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =		BSQ

HPATH =		ft.h 

SRCS =		main.c \
				libft.c \

FLAGS =		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):
		gcc -I$(HPATH)$(FLAGS) -o $@ $(SRCS)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
