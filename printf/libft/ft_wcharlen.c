/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:35:24 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:35:25 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wcharlen(wchar_t chr)
{
	if (chr <= 0x7F)
		return (1);
	if (chr <= 0x7FF)
		return (2);
	if (chr <= 0xFFFF)
		return (3);
	if (chr <= 0x10FFFF)
		return (4);
	return (0);
}
