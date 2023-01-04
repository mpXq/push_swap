/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:37:11 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 15:09:46 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	sa(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
		write(1, "sa\n", 3);
		return (1);
	}
	return (0);
}

int	sb(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
		write(1, "sb\n", 3);
		return (1);
	}
	return (0);
}

int	ss(int a[], int b[], int lena, int lenb)
{
	int	tmp;

	if (lena > 1)
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
	if (lenb > 1)
	{
		tmp = b[0];
		b[0] = b[1];
		b[1] = tmp;
	}
	write(1, "ss\n", 3);
	return (1);
}
