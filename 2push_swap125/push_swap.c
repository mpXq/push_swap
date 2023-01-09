/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:07:13 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/05 12:55:34 by pfaria-d         ###   ########.fr       */
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

static int	algo(int a[], int b[], int lena, int lenb)
{
	int	i;

	i = sortminus6(a, b, lena, lenb);
	return (i);
}

int	main(int argc, char **argv)
{
	int	a[100000];
	int	b[100000];
	int	tmp;
	int	i;
 	int x = 0; 

	i = 0;
	if (errorchecker(argc, argv))
		return (-1);
	tmp = argc - 1;
	while (tmp-- > 0)
		a[tmp] = ft_atoi(argv[tmp + 1]);
	i = algo(a, b, argc - 1, 0);
 	while (x < argc - 1)
	{
		printf("%d = %d\n", x,  a[x]);
		x++;	
	}
	return (i);
}
