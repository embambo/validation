/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:25:57 by embambo           #+#    #+#             */
/*   Updated: 2020/07/15 14:05:47 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "../libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct	s_array
{
	int			*array_a;
	int			*array_b;
	int			*array_c;
	int			size_a;
	int			size_b;
	int			size_c;
}				t_array;

t_array			*parse_args(int argc, char **argv, t_array *array, int x);

void			init_array_struct(t_array *array, int argc, int x);
void			print_stack(int *a, int len);
void			sort_5(t_array *array);
void			partition(t_array *array, int i, int j);
void			push_to_b(t_array *array);
void			ra_counter(t_array *array, int counter);
void			rra_counter(t_array	*array, int counter);
void			push_to_b(t_array *array);
void			portions(t_array *array);
void			bubble_sort(int *a, int len);
void			chunks(t_array *array);
void			operations_h(t_array *array);
void			operations_h2(t_array *array);
void			rb_counter(t_array *array, int counter);
void			rrb_counter(t_array *array, int counter);
void			push_back_to_a(t_array *array, int *b, int len);
void			pa_counter(t_array *array, int counter);
void			sort_5_helper1(t_array *array);
void			sort_5_helper2(t_array *array);
void			operations_h1(t_array *array);
void			operations_h3(t_array *array);
void			sort_5_helper1(t_array *array);
void			sort_5_helper2(t_array *array);
void			free_array(t_array *array);
void			sort_3(t_array	*array);
void			ft_sb(t_array *array);
void			free_array(t_array	*array);
void			sort_5_helper5(t_array *array);
void			check_av(t_array *array, char **argv, int argc);
void			sort(t_array *array);
void			indexes_for_500(t_array *array, int *d);
void			portions_500(t_array *array);
void			check_argv(t_array *stacks, char **argv, int argc);
void			delete_stacks(t_array **stacks);

int				max_elem(int *array, int len);
int				is_sorted(int *array, int len);
int				get_next_line(const int fd, char **line);
int				check_if_dup(int argc, char **argv);
long long 		ft_ato_longlong(char *str);

void			ft_sa(t_array *array);
void			ft_sb(t_array *array);
void			ft_ss(t_array *array);
void			ft_pa(t_array *array);
void			ft_pb(t_array *array);
void			ft_ra(t_array *array);
void			ft_rb(t_array *array);
void			ft_rr(t_array *array);
void			ft_rra(t_array *array);
void			ft_rrb(t_array *array);
void			ft_rrr(t_array *array);

int				ft_arrlen(char **arr);

int				portions_helper(int *uns, int *sort, int *d, int len);
int				portions_from_end(int *uns, int *sort, int *d, int len);
#endif
