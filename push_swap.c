/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:32:54 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/12/12 14:11:10 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*a;
	int		tmp;
	int		i;

	tmp = argc - 1;
	a = malloc(tmp * sizeof(int));
	if (!a)
		return (0);
	while (tmp-- > 0)
		a[tmp] = ft_atoi(argv[tmp + 1]);
	a = minus1(a);
	printf("--\n");
	i = 0;
	while (i < argc - 1)
		printf("%d\n", a[i++]);
	return (0);
}
