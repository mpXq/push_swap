/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:23:55 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/05 13:10:33 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(int a[], int lena, int i)
{
	if (a[0] < a[1] && a[0] < a[2])
	{
		if (a[2] < a[1])
		{
			i += rra(a, lena);
			i += sa(a, lena);
		}
	}
	else if (a[1] < a[0] && a[1] < a[2])
	{
		if (a[0] < a[2])
			i += sa(a, lena);
		else if (a[0] > a[2])
			i += ra(a, lena);
	}
	else if (a[2] < a[0] && a[2] < a[1])
	{
		if (a[1] < a[0])
		{
			i += ra(a, lena);
			i += sa(a, lena);
		}
		else if (a[1] > a[0])
			i += rra(a, lena);
	}
}

int	findminus(int a[], int lena)
{
	int	x;
	int	rep;

	x = 0;
	rep = x;
	while (x < lena)
	{
		if (a[rep] >= a[x])
			rep = x;
		x++;
	}
	return (rep);
}

int	findminus2(int a[], int lena, int tmp)
{
	int	x;
	int	rep;

	x = 0;
	rep = x;
	while (x < lena)
	{
		if (a[rep] >= a[x] && a[rep] > tmp)
			rep = x;
		x++;
	}
	return (rep);
}

int	firstsort(int a[], int b[], int lena, int lenb)
{
	int	i;
	int	tmp;
	int	min;

	i = 0;
	while (lena > 3)
	{
		tmp = findminus(a, lena);
		min = a[tmp];
		if (tmp >= lena / 2)
			while (a[0] != min)
				i += rra(a, lena);
		else
			while (a[0] != min)
				i += ra(a, lena);
		i += pb(a, b, lena--, lenb++);
	}
	sort3(a, lena, i);
	while (lenb > 0)
		i += pa(a, b, lena++, lenb--);
	return (i);
}

int	sortminus6(int a[], int b[], int lena, int lenb)
{
	int	i;

	i = 0;
	if (lena == 2)
	{
		if (a[0] > a[1])
			i += sa(a, lena);
	}
	else if (lena == 3)
		sort3(a, lena, i);
	else
		i += firstsort(a, b, lena, lenb);
	return (i);
}
