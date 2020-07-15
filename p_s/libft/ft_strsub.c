/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:59:01 by embambo           #+#    #+#             */
/*   Updated: 2020/06/25 16:48:45 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	control;
	char	*substring;

	if (!s)
		return (NULL);
	substring = (char*)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	control = 0;
	while (control < len)
	{
		substring[control] = s[start];
		start++;
		control++;
	}
	substring[control] = '\0';
	return (substring);
}
