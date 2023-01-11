/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:03:16 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/11 16:38:00 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(t_stack a, t_stack b)
{
	if (b && b->length > 0)
	{
		a = insert_values_front(a, b->start->value);
		b = del_values_front(b);
		write(1, "pa\n", 3);
		return (1);
	}
	return (0);
}

int	pb(t_stack b, t_stack a)
{
	if (a && a->length > 0)
	{
		b = insert_values_front(b, a->start->value);
		a = del_values_front(a);
		write(1, "pb\n", 3);
		return ;
	}
	return ;
}
