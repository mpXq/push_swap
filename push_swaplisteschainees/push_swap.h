/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:55:45 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/11 16:39:41 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/*----- Struct creation -----*/

/* Definition of the stack */
typedef struct s_elem {
	int				value;
	struct s_elem	*previous;
	struct s_elem	*next;
}				t_elem;

/* Definition of the stack structure */
typedef struct s_stack {
	int				length;
	struct s_elem	*start;
	struct s_elem	*end;
}				*t_stack;

/*----- Stack utils -----*/

/* Create the stack */
t_stack	newstack(void);
/* Check if the stack is empty */
int		is_empty(t_stack stack);
/* Return the stack length */
int		stack_length(t_stack stack);
/* Return the first value of the stack */
int		stack_first(t_stack stack);
/* Return the last value of the stack */
int		stack_last(t_stack stack);
/* Add the value nb at the back of the stack */
t_stack	insert_values_back(t_stack stack, int nb);
/* Add the value nb at the front of the stack*/
t_stack	insert_values_front(t_stack stack, int nb);
/* Delete the value at the back of the stack */
t_stack	del_values_back(t_stack stack);
/* Delete the value at the front of the stack */
t_stack	del_values_front(t_stack stack);

/*----- Utils ------*/

long	ft_atol(const char *str);
void	printerror(void);

/*----- Moves -----*/
int		sa(t_stack a);
int		sb(t_stack b);
int		ss(t_stack a, t_stack b);
int		pa(t_stack a, t_stack b);
int		pb(t_stack b, t_stack a);
#endif