/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:55:48 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/11 16:41:13 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	errorchecker(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	while (argv[i])
		ft_atol(argv[i++]);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_elem	*tmp;
	t_elem	*tmp2;
	int		i;

	i = 1;
	a = newstack();
	b = newstack();
	if (errorchecker(argc, argv))
		return (-1);
	while (argv[i])
		a = insert_values_back(a, ft_atol(argv[i++]));
	tmp = a->start;
	while (tmp)
	{
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
	sa(a);
	printf("\n ---------- \n");
	tmp = a->start;
	while (tmp)
	{
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
	pb(b, a);
	printf("\n ---------- \n");
	tmp = a->start;
	printf("a :\n");
	while (tmp)
	{
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
	tmp2 = b->start;
	printf("b :\n");
	while (tmp2)
	{
		printf("%d ", tmp2->value);
		tmp2 = tmp2->next;
	}
	return (0);
}
