/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:03:09 by embambo           #+#    #+#             */
/*   Updated: 2020/06/25 16:42:15 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		control;

	control = 0;
	while (src[control] && control < len)
	{
		dst[control] = src[control];
		control++;
	}
	while (control < len)
	{
		dst[control] = '\0';
		control++;
	}
	return (dst);
}
