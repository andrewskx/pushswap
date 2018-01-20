#include "pushswap.h"

void	sort_algorithm(t_stack *a, t_stack *b)
{
	int i;

	while (!is_sorted(a))
	{
		
		if (a->min_elem_index > (a->index + 1) / 2)
		{
			write(1, "here\n", 5);
			i = a->index - a->min_elem_index + 1;
			while (i > 0)
			{
				rotate_a_b(a);
				write(1, "\nexec rra", 9);
				print_stack(a, b);
				i--;
			}
			find_min(a);
		}
		else if (a->min_elem_index <=  (a->index + 1) / 2)
		{
			i = a->min_elem_index + 1;
			while (i > 0)
			{
				reverse_a_b(a);
				write(1, "\nexec ra", 8);
				print_stack(a, b);
				i--;
			}
			find_min(a);
		}
		if (!is_sorted(a))
		{
			push_a_b(b, a);
			write(1, "\nexec pa", 8);
			print_stack(a, b);
		}
	}
}
