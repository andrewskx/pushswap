/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:46:58 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:46:59 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char*)src;
	d = (char*)dest;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return ((void*)&d[i + 1]);
		i++;
	}
	return (NULL);
}
