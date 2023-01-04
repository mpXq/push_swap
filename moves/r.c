/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:37:09 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 13:44:17 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[0];
		minus1(a, len);
		a[len - 1] = tmp;
	}
}

void	rr(int a[], int b[], int lena, int lenb)
{
	r(a, lena);
	r(b, lenb);
}

void	rrn(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[len - 1];
		plus1(a, len);
		a[0] = tmp;
		a[len] = 0;
	}
}

void	rrr(int a[], int b[], int lena, int lenb)
{
	rrn(a, lena);
	rrn(b, lenb);
}
