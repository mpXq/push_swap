/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:03:11 by pfaria-d          #+#    #+#             */
/*   Updated: 2022/12/12 13:58:03 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>

int		ft_intplen(int *a);
//Returns the len of the int list
int		*plus1(int *a);
//Moves all instances in the list by 1
int		*minus1(int *a);
//Moves all instances in the list by -1
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

#endif
