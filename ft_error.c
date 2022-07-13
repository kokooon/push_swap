/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:03:00 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 15:48:00 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[i])
		write(2, "Error\n", 6);
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	exit(0);
}

void	push_swap_error(t_struct *list)
{
	free(list);
	error_msg("\0");
}
