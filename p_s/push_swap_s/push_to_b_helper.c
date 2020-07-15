/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:43:18 by embambo           #+#    #+#             */
/*   Updated: 2020/06/15 12:20:26 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_to_b(t_array *array)
{
	if (array->array_a[0] < array->array_b[0])
	{
		ft_pb(array);
		ft_sb(array);
		return ;
	}
	else
	{
		ft_pb(array);
		return ;
	}
}



