/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:02:38 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/18 16:50:38 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static int	reader(t_pswap *p, char *str)
{
	if (ft_strcmp(str, "ra\n") == 0)
		return (ra(p), 1);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (rb(p), 1);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (rr(p), 1);
	else if (ft_strcmp(str, "sa\n") == 0)
		return (sa(p), 1);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (sb(p), 1);
	else if (ft_strcmp(str, "ss\n") == 0)
		return (ss(p), 1);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (rra(p), 1);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (rrb(p), 1);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (rrr(p), 1);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (pa(p), 1);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (pb(p), 1);
	else
		return (0);
}

static void	clear(t_pswap *p)
{
	while (p->a)
		del_values_fronta(p);
	while (p->b)
		del_values_frontb(p);
}

static int	sorted(t_pswap *p)
{
	t_elem	*elem;
	int		y;

	elem = p->a->s;
	y = 0;
	while (elem)
	{
		if (elem->next && elem->next->v > elem->v)
			y++;
		elem = elem->next;
	}
	if (y == p->a->length - 1)
		return (1);
	return (0);
}

void	checker(t_pswap *p)
{
	char	*str;

	str = get_next_line(0);
	while (str && reader(p, str))
		str = get_next_line(0);
	if (!str || ft_strcmp(str, "\n") == 0)
	{
		if (p->b)
			write(1, "KO\n", 3);
		if (!p->b && sorted(p))
			write(1, "OK\n", 3);
		else if (!p->b && !sorted(p))
			write(1, "KO\n", 3);
		clear(p);
		freeee(str);
	}
	else
	{
		clear(p);
		freeee(str);
		printerror();
	}
}
