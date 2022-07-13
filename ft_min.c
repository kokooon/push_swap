/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:43:58 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 16:34:14 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int *str, int len)
{
	int	min;
	int	itmp;

	min = 2147483647;
	while (len - 1 >= 0)
	{
		if (str[len - 1] <= min)
		{
			min = str[len - 1];
			itmp = len - 1;
		}
		len--;
	}
	return (itmp);
}

int	ft_next_min(int *str, int len, int tmp)
{
	int	min;
	int	itmp;

	min = 2147483647;
	while (len - 1 >= 0)
	{
		if (str[len - 1] <= min && str[len - 1] > tmp)
		{
			min = str[len - 1];
			itmp = len - 1;
		}
		len --;
	}
	return (itmp);
}

int	ft_maxbits(int len)
{
	int	i;
	int	bits;

	i = 0;
	while (len != 0)
	{
		len = len / 2;
		i++;
	}
	return (i);
}
