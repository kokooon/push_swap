/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:45:30 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/06 09:59:27 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_struct *list)
{
	int	tmp;
	int	i;

	i = 0;
	if (list->lenb == 0)
		return ;
	tmp = list->ba[0];
	list->ba[0] = list->bb[0];
	while (i < list->lenb - 1)
	{
		list->bb[i] = list->bb[i + 1];
		i++;
	}
	list->bb[list->lenb - 1] = 0;
	list->lena++;
	list->lenb--;
	i = list->lena - 1;
	while (i > 0)
	{
		list->ba[i] = list->ba[i - 1];
		i--;
	}
	list->ba[1] = tmp;
	write(1, "pa\n", 3);
}

void	push_b(t_struct *list)
{
	int	tmp;
	int	i;

	i = 0;
	if (list->lena == 0)
		return ;
	tmp = list->bb[0];
	list->bb[0] = list->ba[0];
	while (i < list->lena - 1)
	{
		list->ba[i] = list->ba[i + 1];
		i++;
	}
	list->ba[list->lena - 1] = 0;
	list->lenb++;
	list->lena--;
	i = list->lenb - 1;
	while (i > 0)
	{
		list->bb[i] = list->bb[i - 1];
		i--;
	}
	list->bb[1] = tmp;
	write(1, "pb\n", 3);
}

void	rotate_a(t_struct *list)
{
	int	i;
	int	tmp;

	i = 0;
	if (list->lena > 1)
	{
		tmp = list->ba[0];
		while (i < list->lena - 1)
		{
			list->ba[i] = list->ba[i + 1];
			i++;
		}
		list->ba[list->lena - 1] = tmp;
		write(1, "ra\n", 3);
	}
}

void	rotate_b(t_struct *list)
{
	int	i;
	int	tmp;

	i = 0;
	if (list->lenb > 1)
	{
		tmp = list->bb[0];
		while (i < list->lenb - 1)
		{
			list->bb[i] = list->bb[i + 1];
			i++;
		}
		list->bb[list->lenb - 1] = tmp;
		write(1, "rb\n", 3);
	}
}

void	roteate_r(t_struct *list)
{
	int	i;
	int	tmp;

	i = -1;
	if (list->lena > 1)
	{
		tmp = list->ba[0];
		while (++i < list->lena - 1)
			list->ba[i] = list->ba[i + 1];
		list->ba[list->lena - 1] = tmp;
	}
	i = -1;
	if (list->lenb > 1)
	{
		tmp = list->bb[0];
		while (++i < list->lenb - 1)
			list->bb[i] = list->bb[i + 1];
		list->bb[list->lenb - 1] = tmp;
	}
	write(1, "rr\n", 3);
}
