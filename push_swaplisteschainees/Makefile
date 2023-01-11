# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 12:11:37 by pfaria-d          #+#    #+#              #
#    Updated: 2023/01/11 16:26:07 by pfaria-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c utils.c stackutils1.c stackutils2.c moves/s.c moves/p.c

OBJS = $(SRC:.c=.o)

GCC = gcc -Wall -Werror -Wextra

RM  = rm -f

HFILE = push_swap.h

NAME = push_swap

all: $(NAME)

.c.o :
	$(GCC) -c $< -o $@

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) push_swap

re:			fclean $(NAME)

.PHONY: all clean fclean re