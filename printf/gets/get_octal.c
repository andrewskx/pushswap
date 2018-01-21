/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_octal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:22:34 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:22:35 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*get_octal(t_tags *tags, va_list arg)
{
	uintmax_t	value;
	char		*octal;
	char		*new_octal;

	value = get_u_value(tags, arg);
	if (!value && tags->set_precision == true)
		octal = ft_strdup("");
	else
		octal = ft_itoa_base(value, 8);
	precision(tags, &octal);
	if (tags->flags.sharp == true &&
		tags->flags.zero == false && octal[0] != '0')
	{
		new_octal = ft_strjoin("0", octal);
		free(octal);
		return (new_octal);
	}
	return (octal);
}
