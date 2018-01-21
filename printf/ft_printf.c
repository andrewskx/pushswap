/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:21:59 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:22:01 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(char *str, ...)
{
	va_list		arg;
	t_format	format;

	ft_bzero(&format, sizeof(t_format));
	format.str = str;
	va_start(arg, str);
	analyse_format(&format, arg);
	va_end(arg);
	return (format.written);
}
