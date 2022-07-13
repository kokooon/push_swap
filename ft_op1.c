/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:45:39 by gmarzull          #+#    #+#             */
/*   Updated: 2022/05/30 16:45:44 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_struct *list)
{
	int	tmp;

	if (list->lena > 1)
	{
		tmp = list->ba[0];
		list->ba[0] = list->ba[1];
		list->ba[1] = tmp;
		write(1, "sa\n", 3);
	}
}

void	swap_b(t_struct *list)
{
	int	tmp;

	if (list->lenb > 1)
	{
		tmp = list->bb[0];
		list->bb[0] = list->bb[1];
		list->bb[1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	swap_s(t_struct *list)
{
	int	tmp;

	if (list->lena > 1)
	{
		tmp = list->ba[0];
		list->ba[0] = list->ba[1];
		list->ba[1] = tmp;
	}
	if (list->lenb > 1)
	{
		tmp = list->bb[0];
		list->bb[0] = list->bb[1];
		list->bb[1] = tmp;
	}
	write(1, "ss\n", 3);
}
