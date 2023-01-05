/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:37:07 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/05 12:29:11 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(int a[], int b[], int lena, int lenb)
{
	if (lenb >= 1)
	{
		plus1(a, lena);
		lena++;
		a[0] = b[0];
		minus1(b, lenb);
		write(1, "pa\n", 3);
		lenb -= 1;
		return (1);
	}
	return (0);
}

int	pb(int a[], int b[], int lena, int lenb)
{
	if (lena >= 1)
	{
		plus1(b, lenb);
		lenb++;
		b[0] = a[0];
		minus1(a, lena);
		write(1, "pb\n", 3);
		lena -= 1;
		return (1);
	}
	return (0);
}
