/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:54:34 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/11 16:39:45 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	insert_values_back(t_stack stack, int nb)
{
	t_elem	*elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		printerror();
	elem->value = nb;
	elem->next = NULL;
	elem->previous = NULL;
	if (is_empty(stack))
	{
		stack = malloc(sizeof(*stack));
		if (!stack)
			printerror();
		stack->length = 0;
		stack->start = elem;
		stack->end = elem;
	}
	else
	{
		stack->end->next = elem;
		elem->previous = stack->end;
		stack->end = elem;
	}
	stack->length++;
	return (stack);
}

t_stack	insert_values_front(t_stack stack, int nb)
{
	t_elem	*elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		printerror();
	elem->value = nb;
	elem->next = NULL;
	elem->previous = NULL;
	if (is_empty(stack))
	{
		stack = malloc(sizeof(*stack));
		if (!stack)
			printerror();
		stack->length = 0;
		stack->start = elem;
		stack->end = elem;
	}
	else
	{
		stack->start->previous = elem;
		elem->next = stack->start;
		stack->start = elem;
	}
	stack->length++;
	return (stack);
}

t_stack	del_values_back(t_stack stack)
{
	t_elem	*tmp;

	if (is_empty(stack))
		return (newstack());
	if (stack->start == stack->end)
	{
		free(stack);
		stack = NULL;
		return (newstack());
	}
	tmp = stack->end;
	stack->end = stack->end->previous;
	stack->end->next = NULL;
	tmp->next = NULL;
	tmp->previous = NULL;
	free(tmp);
	tmp = NULL;
	stack->length--;
	return (stack);
}

t_stack	del_values_front(t_stack stack)
{
	t_elem	*tmp;

	if (is_empty(stack))
		return (newstack());
	if (stack->start == stack->end)
	{
		free(stack);
		stack = NULL;
		return (newstack());
	}
	tmp = stack->start;
	stack->start = stack->start->next;
	stack->start->previous = NULL;
	tmp->next = NULL;
	tmp->previous = NULL;
	free(tmp);
	tmp = NULL;
	stack->length--;
	return (stack);
}
