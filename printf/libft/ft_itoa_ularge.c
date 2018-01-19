/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ularge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:41:15 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:47:42 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_len(uintmax_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*ft_str_itoa(uintmax_t n, char *str, size_t len)
{
	uintmax_t		nbr;
	char			*s;

	s = str;
	nbr = (uintmax_t)n;
	while (nbr > 0)
	{
		len--;
		s[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (s);
}

char			*ft_itoa_ularge(uintmax_t n)
{
	char	*str;
	size_t	len;

	len = nbr_len(n);
	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
	}
	else
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		str = ft_str_itoa(n, str, len);
	}
	return (str);
}
