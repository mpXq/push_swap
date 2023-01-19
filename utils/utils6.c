/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:22:31 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/18 12:49:07 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_pswap *p)
{
	pa(p);
	maxfirst(p);
	pa(p);
	sa(p);
}

void	is_doublon(char **argv, int argc, int x)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[j])
		{
			if (ft_strcmp(argv[j], argv[i]) == 0 && i != j)
			{
				if (x != argc)
					free(argv);
				printerror();
			}
			j++;
		}
		i++;
	}
}
