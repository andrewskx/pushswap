/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:36:42 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:36:44 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)s;
	i = ft_strlen(str);
	while ((int)i >= 0 && s[i] != (char)c)
	{
		i--;
	}
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}
