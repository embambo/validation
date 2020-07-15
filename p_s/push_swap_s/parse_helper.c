/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_helper.c                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 08:39:49 by embambo           #+#    #+#             */
/*   Updated: 2020/07/15 13:57:33 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	int_validate(char **split, char *nbr, int bgn)
{
	int i;

	i = 0;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (!ft_isdigit(nbr[i + 1]))
			return (0);
		i++;
	}
	while (nbr && nbr[i] != '\0')
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	if (ft_ato_longlong(nbr) > 2147483647 || ft_ato_longlong(nbr) < -2147483647)
		return (0);
	while (split[bgn] && split && nbr)
	{
		if (ft_strequ(split[bgn], nbr))
			return (0);
		bgn++;
	}
	return (1);
}

static	int	build_stacks(t_array *stacks, char **split, int count)
{
	int	i;

	i = -1;
	stacks->array_a = (int*)malloc(sizeof(int)* count);
	stacks->array_b = (int*)ft_memalloc(sizeof(int) * count);
	stacks->size_a = count;
	stacks->size_b = 0;
	while(++i < count)
	{
		if(int_validate(split, split[i], i + 1))
			stacks->array_a[i] = ft_atoi(split[i]);
		else
		{
			delete_stacks(&stacks);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	return (1);
}

static int	split_count(char **split)
{
	int	count;

	count = 0;
	while(*(split++))
		count++;
	return (count);
}

static	void	delete_split(char ***split)
{
	int	i;

	i = 0;
	if(*split)
	{
		while((*split)[i])
			free((*split)[i++]);
		free(*split);
		*split = NULL;
	}
}


void		check_argv(t_array *stacks, char **argv, int argc)
{
	char	**split;

	split = NULL;
	if(argc == 2)
	{
		split = ft_strsplit(argv[1], ' ');
		if(!build_stacks(stacks, split, split_count(split)))
		{
			delete_split(&split);
			exit(1);
		}
		delete_split(&split);
	}
	else if (!build_stacks(stacks, (argv + 1), argc - 1))
		exit(1);
	return ;
}

int		check_if_dup(int argc, char **argv)
{
	int i;
	int j;
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
