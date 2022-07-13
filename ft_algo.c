/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:18:11 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 14:33:54 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_value(t_struct *list)
{
	int	i;
	int	*btmp;
	int	tmp;

	i = 0;
	btmp = malloc(sizeof(int) * list->lena);
	if (!btmp)
		push_swap_error(list);
	tmp = ft_min(list ->ba, list->lena);
	btmp[tmp] = 0;
	while (++i < list->lena)
	{
		tmp = ft_next_min(list->ba, list->lena, list->ba[tmp]);
		btmp[tmp] = i;
	}
	while (i >= 0)
	{
		list->ba[i] = btmp[i];
		i--;
	}
	free(btmp);
}

int	check_sort(t_struct *list)
{
	int	i;

	i = 0;
	while (i < list->lena - 1)
	{
		if (list->ba[i] > list->ba[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	push_swap_algo(t_struct *list)
{
	if (check_sort(list))
		return (1);
	if (list->lena == 2)
		swap_a(list);
	else if (list->lena == 3)
		sort3(list);
	else if (list->lena == 4)
		sort4(list);
	else if (list->lena == 5)
		sort5(list);
	else
	{
		index_value(list);
		ft_radix(list);
	}
	return (0);
}
