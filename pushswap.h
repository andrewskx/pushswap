#ifndef PUSHSWAP_H
#define PUSHSWAP_H
//#include "libft.h"
// #include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct	s_stack
{
	int *arr;
	int size;
	int index;
	int min_elem_index;
}				t_stack;
void	delete_mem(t_stack *a, t_stack *b);
int		validation(int arg, char **argv);
void	sort_algorithm(t_stack *a, t_stack *b);
void	init(t_stack *stack, int size);
void	swap_a_b(t_stack *stack);
void	swap_both(t_stack *stack_a, t_stack *stack_b);
void	push_a_b(t_stack *stack_a, t_stack *stack_b);
void 	push(t_stack *stack, int element);
void	rotate_a_b(t_stack *stack);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	reverse_a_b(t_stack *stack);
void	reverse_both(t_stack *stack_a, t_stack *stack_b);
int		pop_a_b(t_stack *stack);
int		is_full(t_stack *stack);
int		is_empty(t_stack *stack);
int		is_sorted(t_stack *stack);
int 	is_opo_sorted(t_stack *stack);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
void	find_min(t_stack *stack);
#endif
