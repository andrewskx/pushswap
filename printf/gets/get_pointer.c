/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:22:40 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:22:41 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*get_pointer(t_tags *tags, va_list arg)
{
	uintmax_t	value;
	char		*pointer;
	char		*pointer2;

	value = (long)va_arg(arg, void*);
	if (value == 0 && tags->set_precision == true)
		pointer = ft_strdup("");
	else
		pointer = ft_itoa_base(value, 16);
	ft_strtolower(pointer);
	precision(tags, &pointer);
	pointer2 = ft_strjoin("0x", pointer);
	free(pointer);
	return (pointer2);
}
