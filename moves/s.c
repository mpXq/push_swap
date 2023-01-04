/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:37:11 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 13:41:06 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	s(int a[], int len)
{
	int	tmp;

	if (len > 1)
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
}

void	ss(int a[], int b[], int lena, int lenb)
{
	s(a, lena);
	s(b, lenb);
}
