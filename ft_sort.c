/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:57:45 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 16:41:44 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_struct *list)
{
	if (list->ba[0] > list->ba[1])
		swap_a(list);
	if (!check_sort(list))
		rev_rotate_a(list);
	if (list->ba[0] > list->ba[1])
		swap_a(list);
}

void	sort4(t_struct *list)
{
	int	i;
	int	min;

	i = 0;
	min = list->ba[ft_min(list->ba, list->lena)];
	while (i < 3)
	{
		if (list->ba[0] == min)
		{
			push_b(list);
			break ;
		}
		else if (list->ba[list->lena - 1] == min)
		{
			rev_rotate_a(list);
			push_b(list);
			break ;
		}
		else
			rotate_a(list);
		i++;
	}
	sort3(list);
	push_a(list);
}

void	sort5(t_struct *list)
{
	int	i;
	int	min;

	i = 0;
	min = list->ba[ft_min(list->ba, list->lena)];
	while (i < 4)
	{
		if (list->ba[0] == min)
		{
			push_b(list);
			break ;
		}
		else if (list->ba[list->lena - 1] == min)
		{
			rev_rotate_a(list);
			push_b(list);
			break ;
		}
		else
			rotate_a(list);
		i++;
	}
	sort4(list);
	push_a(list);
}

void	ft_radix(t_struct *list)
{
	int	i;
	int	j;
	int	maxbits;

	i = 0;
	maxbits = ft_maxbits(list->lena - 1);
	while (i < maxbits)
	{
		j = 0;
		while (j < list->lenmax)
		{
			if (((list->ba[0] >> i) & 1) == 1)
				rotate_a(list);
			else
				push_b(list);
			j++;
		}
		while (list->lenb != 0)
			push_a(list);
		i++;
	}
}
