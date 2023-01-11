/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:03:23 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/11 16:17:52 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sa(t_stack a)
{
	int	tmp;

	tmp = 0;
	if (a && a->length > 1)
	{
		tmp = a->start->value;
		a->start->value = a->start->next->value;
		a->start->next->value = tmp;
		write(1, "sa\n", 3);
		return (1);
	}
	return (0);
}

int	sb(t_stack b)
{
	int	tmp;

	tmp = 0;
	if (b && b->length > 1)
	{
		tmp = b->start->value;
		b->start->value = b->start->next->value;
		b->start->next->value = tmp;
		write(1, "sb\n", 3);
		return (1);
	}
	return (0);
}

int	ss(t_stack a, t_stack b)
{
	int	i;

	i = 0;
	i += sa(a);
	i += sb(b);
	if (i > 0)
		return (1);
	return (0);
}
