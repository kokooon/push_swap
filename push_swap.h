/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:08:05 by gmarzull          #+#    #+#             */
/*   Updated: 2022/06/29 16:53:24 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_struct
{
	int		*ba;
	int		lena;
	int		*bb;
	int		lenb;
	int		lenmax;
}				t_struct;

int			ft_atoicheck(const char *str);
int			ft_is_digit(char *str);
char		**ft_malloc(int argc, char **argv);
int			ft_check_dupli(int argc, char **argv);
int			ft_check(int argc, char **argv);
void		error_msg(char *str);
void		push_swap_error(t_struct *list);
char		**convert_argv(int argc, char **argv);
int			convert_argc(char **argv);
t_struct	*init_struct(int argc, char **argv);
void		push_a(t_struct *list);
void		push_b(t_struct *list);
void		swap_a(t_struct *list);
void		swap_b(t_struct *list);
void		swap_s(t_struct *list);
void		rotate_a(t_struct *list);
void		rotate_b(t_struct *list);
void		rotate_r(t_struct *list);
void		rev_rotate_a(t_struct *list);
void		rev_rotate_b(t_struct *list);
void		rev_rotate_r(t_struct *list);
void		index_value(t_struct *list);
int			check_sort(t_struct *list);
int			push_swap_algo(t_struct *list);
int			ft_min(int *str, int len);
int			ft_next_min(int *str, int len, int tmp);
void		sort3(t_struct *list);
void		sort4(t_struct *list);
void		sort5(t_struct *list);
void		ft_radix(t_struct *list);
int			ft_maxbits(int len);

#endif