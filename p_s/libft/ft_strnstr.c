/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:26:43 by embambo           #+#    #+#             */
/*   Updated: 2020/06/25 16:44:35 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	unsigned int pos;
	unsigned int i;

	if (!*n)
		return ((char*)h);
	pos = 0;
	while (h[pos] != '\0' && (size_t)pos < len)
	{
		if (h[pos] == n[0])
		{
			i = 1;
			while (n[i] != '\0' && h[pos + i] == n[i] &&
					(size_t)(pos + i) < len)
				++i;
			if (n[i] == '\0')
				return ((char*)&h[pos]);
		}
		++pos;
	}
	return (0);
}
