/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:54:03 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 15:23:52 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rra(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[len - 1];
		plus1(a, len);
		a[0] = tmp;
		a[len] = 0;
		write(1, "rra\n", 4);
		return (1);
	}
	return (0);
}

int	rrb(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[len - 1];
		plus1(a, len);
		a[0] = tmp;
		a[len] = 0;
		write(1, "rrb\n", 4);
		return (1);
	}
	return (0);
}

int	rrr(int a[], int b[], int lena, int lenb)
{
	int	tmp;

	if (lena > 1)
	{
		tmp = a[lena - 1];
		plus1(a, lena);
		a[0] = tmp;
		a[lena] = 0;
	}
	if (lenb > 1)
	{
		tmp = b[lenb - 1];
		plus1(b, lenb);
		b[0] = tmp;
		b[lenb] = 0;
	}
	write(1, "rrr\n", 4);
	return (1);
}
