/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:29:57 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/11 15:35:59 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	newstack(void)
{
	return (NULL);
}

int	is_empty(t_stack stack)
{
	if (stack == NULL)
		return (1);
	return (0);
}

int	stack_length(t_stack stack)
{
	if (is_empty(stack))
		return (0);
	return (stack->length);
}

int	stack_first(t_stack stack)
{
	if (is_empty(stack))
	{
		write(2, "Error: empty list\n", 18);
		exit(1);
	}
	return (stack->start->value);
}

int	stack_last(t_stack stack)
{
	if (is_empty(stack))
	{
		write(2, "Error: empty list\n", 18);
		exit(1);
	}
	return (stack->end->value);
}
