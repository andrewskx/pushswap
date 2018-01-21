/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:22:46 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:25:35 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*set_str_precision(t_tags *tags, char *str)
{
	char	*str_precision;

	if (ft_strlen(str) > tags->precision && tags->set_precision == true)
	{
		str_precision = ft_strnew(tags->precision);
		ft_strncpy(str_precision, str, tags->precision);
	}
	else
		str_precision = ft_strdup(str);
	return (str_precision);
}

char	*get_string(t_tags *tags, va_list arg)
{
	char	*str;

	if (!(str = va_arg(arg, char*)))
	{
		if (tags->set_precision == true || tags->width_precision == true)
			str = ft_strdup("");
		else
			return (ft_strdup("(null)"));
	}
	return (set_str_precision(tags, str));
}
