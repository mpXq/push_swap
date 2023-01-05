/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:46:18 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/05 12:12:52 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	minus1(int a[], int len)
{
	int	tmp;
	int	c[1000000];
	int	i;
	int	j;

	tmp = len;
	i = 1;
	j = 0;
	while (i < len)
		c[j++] = a[i++];
	i = 1;
	j = 0;
	while (j < len)
	{
		a[j] = c[j];
		j++;
	}
	a[j] = 0;
	len = tmp - 1;
}

void	plus1(int a[], int len)
{
	int	c[1000000];
	int	i;
	int	j;
	int	tmp;

	tmp = len;
	i = 1;
	j = 0;
	while (j < len + 1)
		c[i++] = a[j++];
	i = 1;
	j = 0;
	while (j < len + 1)
	{
		a[j] = c[j];
		j++;
	}
	len = tmp + 1;
	a[0] = 0;
}

static int	verif2(const char *str)
{
	if (!str[1] && (str[0] == '-' || str[0] == '+'))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}

static int	verif(const char *str)
{
	int	i;
	int	p;

	i = -1;
	p = 1;
	if (str[i + 1] && (str[i + 1] == '-' || str[i + 1] == '+'))
		i++;
	while (str[++i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] == '.' && p)
				p--;
			else
			{
				write(2, "Error\n", 6);
				return (1);
			}
		}
	}
	if (verif2(str))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	y;
	int	rep;

	i = 0;
	y = 1;
	rep = 0;
	if (verif(str))
		exit(1);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			y = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (rep == 214748364 && str[i] == 8 && y == -1)
			return (-2147483648);
		rep = (rep * 10) + (str[i++] - 48);
	}
	return (rep * y);
}
