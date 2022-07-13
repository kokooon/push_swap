/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:07:46 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 16:55:16 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoicheck(const char *str)
{
	char		*s;
	int			i;
	long int	r;
	int			n;

	s = (char *)str;
	n = 1;
	i = 0;
	r = 0;
	if (s[i] == '-')
	{
		n = -n;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] && s[i] > 47 && s[i] < 58)
	{
		r = 10 * r + s[i] - '0';
		i++;
	}
	if ((r * n) > 2147483647 || (r * n) < -2147483648)
		return (0);
	return (1);
}

int	ft_is_digit(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	if (str[0] == '-')
	{
		if (size > 1)
		{
			if (!ft_isdigit(str[i + 1]))
				return (0);
			else
				i++;
		}
	}
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**ft_malloc(int argc, char **argv)
{
	int		i;
	char	**tmp;

	tmp = malloc(sizeof(char *) * argc);
	i = 0;
	while (i < argc - 1)
	{
		tmp[i] = argv[i + 1];
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

int	ft_check_dupli(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]) && j != i)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_check(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc >= 3)
		argv = ft_malloc(argc, argv);
	else if (argc < 3)
		argv = ft_split(argv[1], ' ');
	i = 0;
	c = ft_tablen(argv);
	while (i < c)
	{
		if (!ft_is_digit(argv[i]) || !ft_atoicheck(argv[i]))
		{
			free(argv);
			return (0);
		}
		i++;
	}
	if (!ft_check_dupli(c, argv))
	{
		free(argv);
		return (0);
	}
	free(argv);
	return (1);
}
