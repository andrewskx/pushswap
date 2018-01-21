/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:35:10 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:35:11 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42
# define EOL '\n'
# define ERROR -1
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int	get_next_line(int const fd, char **line);

#endif
