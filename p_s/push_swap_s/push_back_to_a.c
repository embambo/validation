/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:04:56 by embambo           #+#    #+#             */
/*   Updated: 2020/06/15 12:19:23 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_max_index(t_array *array)
{
	int max;
	int i;

	i = 1;
	max = array->array_b[0];
	while (i < array->size_b)
	{
		if (array->array_b[i] > max)
			max = array->array_b[i];
		i++;
	}
	i = 0;
	while (array->array_b[i] != max)
		i++;
	return (i);
}

void			push_back_to_a(t_array *array, int *b, int len)
{
	int l;

	l = 0;
	len = array->size_b;
	while (l < len && b)
	{
		if ((ft_max_index(array)) < ((array->size_b) / 2))
		{
			rb_counter(array, ft_max_index(array));
			ft_pa(array);
		}
		else
		{
			rrb_counter(array, (array->size_b - ft_max_index(array)));
			ft_pa(array);
		}
		l++;
	}
	//ft_putstr("STACK A\n");
	//print_stack(array->array_a, array->size_a);
	//ft_putstr("STACK B\n");
	//print_stack(array->array_b, array->size_b);
	//ft_putstr("STACK C\n");
	//print_stack(array->array_c, array->size_c);
}
