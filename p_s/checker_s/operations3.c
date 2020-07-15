/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:20:28 by embambo           #+#    #+#             */
/*   Updated: 2020/06/16 14:18:48 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

/*
** reverse rotate a - shift down all elements of stack a by 1.
** The last element becomes the first one.
*/

void			ft_rra(t_stack *stks)
{
	int			elems;
	int			size;

	ft_strcpy(stks->last, "rra");
	stks->opnum = 8;
	if (stks->elems_a < 2)
		return (ft_no_change(stks));
	elems = stks->elems_a;
	size = (stks->size) - 1;
	stks->buf_a = stks->stk_a[((stks->size) - 1)];
	while (elems > 0)
	{
		stks->stk_a[size] = stks->stk_a[size - 1];
		size--;
		if (size == 0)
			break ;
		elems--;
	}
	stks->stk_a[stks->top_a] = stks->buf_a;
	ft_print_stacks(stks);
}

/*
** reverse rotate b - shift down all elements of stack b by 1.
** The last element becomes the first one.
*/

void			ft_rrb(t_stack *stks)
{
	int			elems;
	int			size;

	ft_strcpy(stks->last, "rrb");
	stks->opnum = 9;
	if (stks->elems_b < 2)
		return (ft_no_change(stks));
	elems = stks->elems_b;
	size = (stks->size) - 1;
	stks->buf_b = stks->stk_b[((stks->size) - 1)];
	while (elems > 0)
	{
		stks->stk_b[size] = stks->stk_b[size - 1];
		size--;
		if (size == 0)
			break ;
		elems--;
	}
	stks->stk_b[stks->top_b] = stks->buf_b;
	ft_print_stacks(stks);
}

/*
** rra and rrb at the same time.
*/

void			ft_rrr(t_stack *stks)
{
	int			buffer;

	ft_strcpy(stks->last, "rrr");
	stks->opnum = 10;
	if (stks->elems_a < 2 || stks->elems_b < 2)
		return (ft_no_change(stks));
	buffer = stks->flag;
	stks->flag = 0;
	ft_rra(stks);
	ft_rrb(stks);
	stks->flag = buffer;
	ft_strcpy(stks->last, "rrr");
	ft_print_stacks(stks);
}
