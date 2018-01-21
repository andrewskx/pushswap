/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:37:50 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:37:51 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;
	char			*str_new;

	str = (char*)s;
	if (str && f)
	{
		i = 0;
		str_new = ft_strnew(ft_strlen(str));
		if (!str_new)
			return (NULL);
		while (str[i])
		{
			str_new[i] = (*f)(str[i]);
			i++;
		}
		return (str_new);
	}
	return (NULL);
}
