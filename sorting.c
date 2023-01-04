/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:23:55 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 17:08:58 by pfaria-d         ###   ########.fr       */
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

int	sort4(int a[], int b[], int lena, int lenb)
{
	int	i;

	i = 0;
	if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3])
	{
		i += pb(a, b, lena, lenb);
	}
	else if (a[1] < a[0] && a[1] < a[2] && a[1] < a[3])
	{
		i += sa(a, lena);
		i += pb(a, b, lena, lenb);
	}
	else if (a[2] < a[0] && a[2] < a[1] && a[2] < a[3])
	{
		i += ra(a, lena);
		i += sa(a, lena);
		i += pb(a, b, lena, lenb);
	}
	else
	{
		i += rra(a, lena);
		i += pb(a, b, lena, lenb);
	}
	return (i);
}

int	sortminus6(int a[], int b[], int lena, int lenb)
{
	int	i;

	i = 0;
	if (lena == 2)
		if (a[0] > a[1])
			i += sa(a, lena);
	if (lena == 3)
		sort3(a, lena, i);
	else if (lena == 4)
	{
		i += sort4(a, b, lena, lenb);
		lena--;
		lenb++;
		sort3(a, lena, i);
		pa(a, b, 3, 1);
	}
	else if (lena == 5)
	{
		i += sort4(a, b, lena, lenb);
		lena--;
		lenb++;
		i += sort4(a, b, lena, lenb);
		lena--;
		lenb++;
		sort3(a, lena, i);
		if (b[0] < b[1])
			sb(b, lenb);
		pa(a, b, 3, 1);
		lena++;
		lenb--;
		pa(a, b, 3, 1);
	}
	return (i);
}
