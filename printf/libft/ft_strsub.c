/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:36:24 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:36:25 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_new;
	char	*str;

	if (!(str_new = ft_strnew(len)) || !s)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (i < len)
	{
		str_new[i] = str[start];
		i++;
		start++;
	}
	str_new[i] = '\0';
	return (str_new);
}
