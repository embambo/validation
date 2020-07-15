/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:20:28 by embambo           #+#    #+#             */
/*   Updated: 2020/07/15 09:41:27 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_rra(t_array *array)
{
	int i;
	int temp;

	i = array->size_a - 1;
	temp = array->array_a[i];
	while (i > 0)
	{
		array->array_a[i] = array->array_a[i - 1];
		i--;
	}
	array->array_a[0] = temp;
	ft_putstr("rra\n");
}

void			ft_rrb(t_array *array)
{
	int i;
	int temp;

	i = array->size_b - 1;
	temp = array->array_b[i];
	while (i > 0)
	{
		array->array_b[i] = array->array_b[i - 1];
		i--;
	}
	array->array_b[0] = temp;
	//ft_putstr("rrb\n");
}

void			ft_rrr(t_array *array)
{
	int i;
	int temp;

	if (array->size_a > 1)
	{
		i = array->size_a - 1;
		temp = array->array_a[i];
		while (i > 0)
		{
			array->array_a[i] = array->array_a[i - 1];
			i--;
		}
		array->array_a[0] = temp;
	}
	if (array->size_b > 1)
	{
		i = array->size_b - 1;
		temp = array->array_b[i];
		while (i > 0)
		{
			array->array_b[i] = array->array_b[i - 1];
			i--;
		}
		array->array_b[0] = temp;
	}
}
