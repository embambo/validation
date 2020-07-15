/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:33:50 by embambo           #+#    #+#             */
/*   Updated: 2020/06/25 16:31:47 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *destination, const char *source)
{
	size_t		control;

	control = 0;
	while (source[control])
	{
		destination[control] = source[control];
		control++;
	}
	destination[control] = '\0';
	return (destination);
}
