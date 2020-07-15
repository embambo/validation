/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:01:31 by embambo          #+#    #+#              */
/*   Updated: 2020/07/15 14:08:18 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

long long	ft_ato_longlong(char *str)
{
	long long i;
	long long sign;
	long long num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
