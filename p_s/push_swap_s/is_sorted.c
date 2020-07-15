/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 13:07:02 by embambo           #+#    #+#             */
/*   Updated: 2020/07/15 13:04:05 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int			is_sorted(int *array, int len)
{
	int i;

	i = 0;
	while (i < len - 1)
	{
		if (array[i] < array[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

void		free_array(t_array *array)
{
	free(array->array_a);
	free(array->array_b);
	free(array->array_c);
	free(array);
	array = NULL;
}

void	delete_stacks(t_array **stacks)
{
	if(*stacks)
	{
		if((*stacks)->array_a)
			free((*stacks)->array_a);
		if((*stacks)->array_b)
			free((*stacks)->array_b);
		free(*stacks);
		*stacks = NULL;
	}
}

