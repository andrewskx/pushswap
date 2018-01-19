/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:28:49 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:28:50 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	get_width(t_tags *tags, t_format *format, va_list arg)
{
	char			chr;
	unsigned int	old;

	old = tags->width;
	if ((chr = *get_pos(format)) == '*')
	{
		tags->width = va_arg(arg, unsigned int);
		format->position++;
	}
	else if ((chr = *get_pos(format)) && !ft_isdigit(chr))
		tags->width = 0;
	else
	{
		while ((chr = *get_pos(format)) && (ft_isdigit(chr)))
		{
			atoi_add_digit(chr, &(tags->width));
			format->position++;
		}
	}
	if (old > tags->width)
		tags->width = old;
}
