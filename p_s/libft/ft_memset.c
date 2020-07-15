/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:40:35 by embambo           #+#    #+#             */
/*   Updated: 2020/06/25 16:18:31 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			a;
	unsigned char	b;
	unsigned char	*pointer;

	a = 0;
	b = (unsigned char)c;
	pointer = (unsigned char*)str;
	while (a < n)
	{
		pointer[a] = b;
		a++;
	}
	return (str);
}
