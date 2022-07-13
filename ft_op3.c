/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:00:29 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/06 10:17:08 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_struct *list)
{
	int	i;
	int	tmp;

	i = list->lena - 1;
	if (i > 0)
	{
		tmp = list->ba[list->lena - 1];
		while (i >= 0)
		{
			list->ba[i] = list->ba[i - 1];
			i--;
		}
		list->ba[0] = tmp;
		write(1, "rra\n", 4);
	}
}

void	rev_rotate_b(t_struct *list)
{
	int	i;
	int	tmp;

	i = list->lenb - 1;
	if (i > 0)
	{
		tmp = list->ba[list->lenb - 1];
		while (i >= 0)
		{
			list->ba[i] = list->ba[i - 1];
			i--;
		}
		list->ba[0] = tmp;
		write(1, "rra\n", 4);
	}
}

void	rev_rotate_r(t_struct *list)
{
	int	i;
	int	tmp;

	i = list->lena;
	if (i > 1)
	{
		tmp = list->ba[list->lena - 1];
		while (--i >= 0)
			list->ba[i] = list->ba[i - 1];
		list->ba[0] = tmp;
	}
	i = list->lenb;
	if (i > 1)
	{
		tmp = list->ba[list->lenb - 1];
		while (--i >= 0)
			list->ba[i] = list->ba[i - 1];
		list->ba[0] = tmp;
	}
	write(1, "rrr\n", 4);
}
