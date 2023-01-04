/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:40:28 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 16:25:39 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_atoi(const char *str);
void	minus1(int a[], int len);
void	plus1(int a[], int len);
int		sa(int a[], int len);
int		sb(int a[], int len);
int		ss(int a[], int b[], int lena, int lenb);
int		pa(int a[], int b[], int lena, int lenb);
int		pb(int a[], int b[], int lena, int lenb);
int		ra(int a[], int len);
int		rb(int a[], int len);
int		rr(int a[], int b[], int lena, int lenb);
int		rra(int a[], int len);
int		rrb(int a[], int len);
int		rrr(int a[], int b[], int lena, int lenb);
int		sortminus6(int a[], int b[], int lena, int lenb);
void	sort3(int a[], int lena, int i);

#endif
