/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 08:39:49 by embambo           #+#    #+#             */
/*   Updated: 2020/06/24 12:18:33 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

static int			validate_args(char **argv, char *arg, int begin)
{
	int i;

	i = 0;
	while (*arg && arg[i]  != '\0')
	{
		if (ft_atoi(arg) > 2147483647 || ft_atoi(arg) < INT_MIN)
		{
			if (!ft_isdigit(arg[i]) && arg[i] != '-')
				return (0);
		}
		i++;
	}
	while (argv[begin] && argv && arg)
	{
		if (ft_strequ(argv[begin], arg))
			return (0);
		begin++;
	}
	return (1);
}

void				init_array_struct(t_array *array, int argc, int x)
{
	array->array_a = (int*)malloc(sizeof(int) * argc);
	array->array_b = (int*)malloc(sizeof(int) * argc);
	array->array_c = (int*)malloc(sizeof(int) * argc);
	if (x == 0)
	{
		array->size_a = argc;
		array->size_b = 0;
		array->size_c = argc;
	}
	else
	{
		array->size_a = argc - 1;
		array->size_b = 0;
		array->size_c = argc - 1;
	}
}

void				print_stack(int *a, int len)
{
	int i;

	i = 0;
	if (a < 0)
		exit(1);
	while (i <= len - 1)
	{
		ft_putnbr(a[i++]);
		ft_putstr(" ");
	}
	write(1, "\n", 1);
	return ;
}

t_array				*parse_args(int argc, char **argv, t_array *array, int x)
{
	int i;

	i = 0;
	while (i < argc - x)
	{
		if (validate_args(argv, argv[i], i + x))
		{
			array->array_a[i] = ft_atoi(argv[i + x]);
			array->array_c[i] = ft_atoi(argv[i + x]);
		}
		else
		{
			free_array(array);
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
	return (array);
}
