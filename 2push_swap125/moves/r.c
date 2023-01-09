/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:37:09 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 16:03:14 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ra(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[0];
		minus1(a, len);
		a[len - 1] = tmp;
		write(1, "ra\n", 3);
		return (1);
	}
	return (0);
}

int	rb(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[0];
		minus1(a, len);
		a[len - 1] = tmp;
		write(1, "rb\n", 3);
		return (1);
	}
	return (0);
}

int	rr(int a[], int b[], int lena, int lenb)
{
	int	tmp;

	if (lena > 1)
	{
		tmp = a[0];
		minus1(a, lena);
		a[lena - 1] = tmp;
	}
	if (lenb > 1)
	{
		tmp = b[0];
		minus1(b, lenb);
		b[lenb - 1] = tmp;
	}
	write(1, "rr\n", 3);
	return (1);
}
