/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:55:06 by embambo           #+#    #+#             */
/*   Updated: 2020/06/15 12:15:37 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_ra(t_array *array)
{
	int i;
	int temp;

	i = 0;
	temp = array->array_a[0];
	while (i < array->size_a - 1)
	{
		array->array_a[i] = array->array_a[i + 1];
		i++;
	}
	array->array_a[i] = temp;
	ft_putstr("ra\n");
}

void			ft_rb(t_array *array)
{
	int i;
	int temp;

	i = 0;
	temp = array->array_b[0];
	while (i < array->size_b - 1)
	{
		array->array_b[i] = array->array_b[i + 1];
		i++;
	}
	array->array_b[i] = temp;
	ft_putstr("rb\n");
}

void			ft_rr(t_array *array)
{
	int i;
	int temp;

	if (array->size_a > 1)
	{
		i = 0;
		temp = array->array_a[0];
		while (i < array->size_a - 1)
		{
			array->array_a[i] = array->array_a[i + 1];
			i++;
		}
		array->array_a[i] = temp;
	}
	if (array->size_b > 1)
	{
		i = 0;
		temp = array->array_b[0];
		while (i < array->size_b - 1)
		{
			array->array_b[i] = array->array_b[i + 1];
			i++;
		}
		array->array_b[i] = temp;
	}
}
