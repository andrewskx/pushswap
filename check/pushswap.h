/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:26:21 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 17:31:32 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stack
{
	int *arr;
	int size;
	int index;
	int min_elem_index;
}				t_stack;
//int				ft_printf(const char *format, ...);
int				ft_atoi(const char *str);
int				ft_strcmp(const char *s1, const char *s2);
void			*ft_bzero(void *s, unsigned int n);
char			*ft_strnew(size_t size);
void			delete_mem(t_stack *a, t_stack *b);
int				validation(int arg, char **argv);
void			sort_algorithm(t_stack *a, t_stack *b);
void			init(t_stack *stack, int size);
void			swap_a_b(t_stack *stack);
void			swap_both(t_stack *stack_a, t_stack *stack_b);
void			push_a_b(t_stack *stack_a, t_stack *stack_b);
void			push(t_stack *stack, int element);
void			rotate_a_b(t_stack *stack);
void			rotate_both(t_stack *stack_a, t_stack *stack_b);
void			reverse_a_b(t_stack *stack);
void			reverse_both(t_stack *stack_a, t_stack *stack_b);
int				pop_a_b(t_stack *stack);
int				is_full(t_stack *stack);
int				is_empty(t_stack *stack);
int				is_sorted(t_stack *stack);
int				is_opo_sorted(t_stack *stack);
void			print_stack(t_stack *stack_a, t_stack *stack_b);
void			find_min(t_stack *stack);
int				check(t_stack *a, t_stack *b);
#endif
