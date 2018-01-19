/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:36:30 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:36:31 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	int		i;
	int		j;

	str = (char*)haystack;
	i = 0;
	if (!*needle)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (!(needle[j + 1]))
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
