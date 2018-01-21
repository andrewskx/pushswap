#include "pushswap.h"

void	sort_algorithm(t_stack *a, t_stack *b)
{
	while (!is_sorted(a))
	{
		if (a->min_elem_index > a->index / 2)
		{
				rotate_a_b(a);
				write(1, "rra\n", 4);
		}
		else if (a->min_elem_index <= a->index / 2)
		{
				reverse_a_b(a);
				write(1, "ra\n", 3);
		}
		else if (a->min_elem_index == a->index - 1)
		{
			swap_a_b(a);
			write(1, "sa\n", 3);
		}
		if (!is_sorted(a))
		{
			push_a_b(b, a);
			write(1, "pa\n", 3);
			find_min(a);
		}
	//	print_stack(a, b);
	}
	// write(1, "out of loop\n", 12);
	while (!is_empty(b))
	{
		write(1, "pb\n", 3);
		push_a_b(a, b);
	}
}
