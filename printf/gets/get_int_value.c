/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:22:26 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:22:28 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

uintmax_t	get_u_value(t_tags *tags, va_list arg)
{
	uintmax_t value;

	value = va_arg(arg, uintmax_t);
	if (tags->length == HH)
		value = (unsigned char)value;
	else if (tags->length == H)
		value = (unsigned short int)value;
	else if (tags->length == L)
		value = (unsigned long int)value;
	else if (tags->length == LL)
		value = (unsigned long long int)value;
	else if (tags->length == J)
		value = (uintmax_t)value;
	else if (tags->length == Z)
		value = (size_t)value;
	else
		value = (unsigned int)value;
	return (value);
}

intmax_t	get_s_value(t_tags *tags, va_list arg)
{
	intmax_t value;

	value = va_arg(arg, intmax_t);
	if (tags->length == HH)
		value = (char)value;
	else if (tags->length == H)
		value = (short int)value;
	else if (tags->length == L)
		value = (long int)value;
	else if (tags->length == LL)
		value = (long long int)value;
	else if (tags->length == J)
		value = (intmax_t)value;
	else if (tags->length == Z)
		value = (size_t)value;
	else
		value = (int)value;
	return (value);
}
