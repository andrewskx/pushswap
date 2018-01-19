/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_tags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:28:55 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:28:57 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_bool	is_tag(char c)
{
	if (c == 'l' || c == 'h' || c == 'j' || c == 'z' ||
		c == '#' || c == '0' || c == '-' || c == '+' || c == ' ' ||
		(c >= '0' && c <= '9') || c == '.')
		return (true);
	return (false);
}

void	validate_flags(t_tags *tags)
{
	if (tags->flags.zero == true && tags->flags.sharp == true)
		tags->width_precision = true;
	if (tags->flags.zero == true && tags->specifier == POINTER)
		tags->width_precision = true;
	if (tags->flags.sign == true && tags->flags.space == true)
		tags->flags.space = false;
	if (tags->flags.zero == true && tags->flags.left_justify == true)
	{
		tags->flags.zero = false;
		tags->width_precision = false;
	}
	if (tags->flags.zero == true && tags->set_precision == true &&
		tags->specifier != CHAR && tags->specifier != STRING &&
		tags->specifier != PERCENT && tags->specifier != INVALID)
	{
		tags->flags.zero = false;
		tags->width_precision = false;
	}
	if (tags->flags.left_justify == true && tags->flags.zero == false &&
		tags->iter > 1)
		tags->precision = 0;
}
