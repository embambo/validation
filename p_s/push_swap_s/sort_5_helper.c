/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:51:59 by embambo           #+#    #+#             */
/*   Updated: 2020/06/15 12:24:30 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			sort_5_helper1(t_array *array)
{
	int i;

	i = 0;
	if (array->array_a[0] > array->array_b[0])
	{
		ft_pa(array);
		return ;
	}
	if (array->array_b[0] > array->array_a[0] &&
			array->array_b[0] < array->array_a[i + 1])
	{
		operations_h3(array);
		return ;
	}
	if (array->array_b[0] < array->array_a[array->size_a - 1] &&
			array->array_a[0] < array->array_b[0] &&
			array->array_b[0] > array->array_a[i + 1])
	{
		operations_h(array);
		return ;
	}
	if (array->array_b[0] > array->array_a[array->size_a - 1])
	{
		operations_h1(array);
	}
}

void			sort_5_helper2(t_array *array)
{
	int i;
	int j;

	i = 0;
	j = array->size_a;
	if (array->array_a[0] > array->array_b[0])
		ft_pa(array);
	if (array->array_b[0] > array->array_a[0] &&
			array->array_a[i + 1] > array->array_b[0])
	{
		operations_h3(array);
		return ;
	}
	if (array->array_b[0] > array->array_a[i + 1] &&
			array->array_b[0] < array->array_a[j - 1])
	{
		operations_h2(array);
		return ;
	}
	if (array->array_b[0] > array->array_a[array->size_a - 1])
	{
		operations_h1(array);
		return ;
	}
}

void			sort_5_helper5(t_array *array)
{
	ft_pb(array);
	ft_pb(array);
	return ;
}
