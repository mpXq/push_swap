/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:40:28 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/04 13:24:50 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	minus1(int a[], int len);
void	plus1(int a[], int len);
void	s(int a[], int len);
void	ss(int a[], int b[], int lena, int lenb);
void	p(int a[], int b[], int len);
void	r(int a[], int len);
void	rr(int a[], int b[], int lena, int lenb);
void	rrn(int a[], int len);
void	rrr(int a[], int b[], int lena, int lenb);

#endif
