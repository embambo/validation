/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:34:22 by embambo           #+#    #+#             */
/*   Updated: 2020/06/24 12:18:00 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_array *stack;
	int		i;

	i = 2;
	stack = (t_array*)malloc(sizeof(t_array));
	if (argc == 2)
	{
		i = 0;
		argv = ft_strsplit(argv[1], ' ');
		argc = 0;
		while (argv && argv[argc])
			argc++;
		if (argc == 0)
		{
			ft_putstr("Error\n");
			exit(1);
		}
	}
	if (i == 2)
		i = 1;
	init_array_struct(stack, argc, i);
	stack = parse_args(argc, argv, stack, i);
	sort(stack);
	//print_stack(stack->array_a, stack->size_a);
	free_array(stack);
	return (0);
}
