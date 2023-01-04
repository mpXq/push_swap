# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfaria-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 11:14:43 by pfaria-d          #+#    #+#              #
#    Updated: 2023/01/04 14:03:46 by pfaria-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = moves/r.c moves/utils.c moves/p.c moves/s.c push_swap.c

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
