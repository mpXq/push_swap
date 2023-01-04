/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:07:13 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 14:03:02 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	errorchecker(int argc, char **argv)
{
	argv++;
	if (argc <= 1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	return (0);
}

static void	sortminus6(int a[], int b[], int lena, int lenb)
{
	if (lena == 2)
		if (a[0] > a[1])
			s(a);
	if (lena == 3)
	{
	}
}

static void	algo(int a[], int b[], int lena, int lenb)
{
	int	i;

	i = 0;
}

int	main(int argc, char **argv)
{
	int	a[100000];
	int	b[100000];
	int	tmp;

	if (errorchecker(argc, argv))
		return (-1);
	tmp = argc - 1;
	while (tmp-- > 0)
		a[tmp] = ft_atoi(argv[tmp + 1]);
	algo(a, b, argc - 1, 0);
	return (0);
}
