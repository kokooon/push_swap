/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:44:30 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 15:57:21 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**convert_argv(int argc, char **argv)
{
	if (argc > 3)
		argv = ft_malloc(argc, argv);
	else if (argc < 3)
		argv = ft_split(argv[1], ' ');
	return (argv);
}

int	convert_argc(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

t_struct	*init_struct(int argc, char **argv)
{
	t_struct	*list;
	int			i;

	i = 0;
	list = (t_struct *)malloc(sizeof(t_struct));
	if (!list)
		push_swap_error(list);
	list->lena = argc;
	list->lenb = 0;
	list->lenmax = argc;
	list->ba = (int *)malloc(sizeof(int) * argc);
	if (!list->ba)
		push_swap_error(list);
	list->bb = (int *)malloc(sizeof(int) * argc);
	if (!list->bb)
		push_swap_error(list);
	while (i < argc)
	{
		list->ba[i] = ft_atoi(argv[i]);
		i++;
	}
	return (list);
}

int	main(int argc, char **argv)
{
	t_struct	*list;

	if (argc < 2)
		return (0);
	if (!ft_check(argc, argv))
	{
		error_msg("");
		return (0);
	}
	argv = convert_argv(argc, argv);
	argc = convert_argc(argv);
	list = init_struct(argc, argv);
	push_swap_algo(list);
	free(list);
	return (0);
}
