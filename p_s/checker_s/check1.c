/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:06:58 by embambo           #+#    #+#             */
/*   Updated: 2020/06/18 09:46:11 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

void				printing_stack2(int a, int size)
{
	int i;

	i = 0;
	if (a < 0)
		exit(1);
	while (i <= size - 1)
	{
		ft_putnbr(a);
		ft_putstr(",");
		ft_putnbr(size);
	}
	write(1, "\n", 1);
	return ;
}

