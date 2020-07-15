/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:38:11 by embambo           #+#    #+#             */
/*   Updated: 2020/06/17 09:54:32 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sa(t_array *array)
{
	int temp;
	int i;

	if (array->size_a > 1)
	{
		i = 0;
		temp = array->array_a[i];
		array->array_a[0] = array->array_a[1];
		array->array_a[1] = temp;
		ft_putstr("sa\n");
	}
}

void		ft_sb(t_array *array)
{
	int temp;

	if (array->size_b > 1)
	{
		temp = array->array_b[0];
		array->array_b[0] = array->array_b[1];
		array->array_b[1] = temp;
		ft_putstr("sa\n");
	}
}

void		ft_ss(t_array *array)
{
	int i;
	int j;

	if (array->size_a > 1)
	{
		i = array->array_a[0];
		array->array_a[0] = array->array_a[1];
		array->array_a[1] = i;
	}
	if (array->size_b > 1)
	{
		j = array->array_b[0];
		array->array_b[0] = array->array_b[1];
		array->array_b[1] = j;
	}
	ft_putstr("ss\n");
}

void		ft_pa(t_array *array)
{
	int i;

	if (array->size_b == 0)
		return ;
	i = array->size_a;
	while (i--)
		array->array_a[i + 1] = array->array_a[i];
	array->array_a[0] = array->array_b[0];
	i = 0;
	while (i++ <= array->size_b - 1)
		array->array_b[i - 1] = array->array_b[i];
	array->size_a++;
	array->size_b--;
	ft_putstr("pa\n");
}

void		ft_pb(t_array *array)
{
	int i;

	if (array->size_a == 0)
		return ;
	i = array->size_b;
	while (i--)
		array->array_b[i + 1] = array->array_b[i];
	array->array_b[0] = array->array_a[0];
	i = 0;
	while (i++ <= array->size_a)
		array->array_a[i - 1] = array->array_a[i];
	array->size_b++;
	array->size_a--;
	ft_putstr("pb\n");
}
