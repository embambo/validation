/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portions.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:37:54 by embambo           #+#    #+#             */
/*   Updated: 2020/06/15 12:18:19 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void		indexes(t_array *array, int *d)
{
	if (d[1] == 20000 && d[2] == 20000)
	{
		d[5] = d[5] + 19;
		d[6] = d[6] + 19;
	}
	else
		ft_pb(array);
}

void		portions_find(t_array *array, int *d)
{
	if ((d[0] = portions_helper(array->array_a, array->array_c, d,
					array->size_a)) != -1 && d[0] < d[1])
		d[1] = d[0];
	if ((d[0] = portions_from_end(array->array_a, array->array_c, d,
					array->size_a)) != -1 && d[0] < d[2])
		d[2] = d[0];
	if (d[1] > d[3] - d[2] && d[2] < 2000)
		rra_counter(array, (array->size_a - d[2]));
	else if (d[1] < 2000)
		ra_counter(array, d[1]);
}

void		portions(t_array *array)
{
	int d[7];

	d[0] = 0;
	d[4] = 0;
	d[5] = 0;
	d[6] = 19;
	d[3] = array->size_a - 1;
	bubble_sort(array->array_c, array->size_c);
	while (d[4] < array->size_a && array->size_c)
	{
		d[1] = 20000;
		d[2] = 20000;
		portions_find(array, d);
		indexes(array, d);
		d[0] = array->size_a - 1;
	}
	d[4]++;
	push_back_to_a(array, array->array_b, array->size_b);
	return ;
}

void		indexes_for_500(t_array *array, int *d)
{
	if (d[1] == 20000 && d[2] == 20000)
	{
		d[5] = d[5] + 45;
		d[6] = d[6] + 45;
	}
	else
		ft_pb(array);
}

void		portions_500(t_array *array)
{
	int d[7];

	d[0] = 0;
	d[4] = 0;
	d[5] = 0;
	d[6] = 45;
	d[3] = array->size_a - 1;
	bubble_sort(array->array_c, array->size_c);
	while (d[4] < array->size_a && array->size_c)
	{
		d[1] = 20000;
		d[2] = 20000;
		portions_find(array, d);
		indexes_for_500(array, d);
		d[0] = array->size_a - 1;
	}
	d[4]++;
	push_back_to_a(array, array->array_b, array->size_b);
	return ;
}
