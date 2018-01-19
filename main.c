#include <stdio.h>
#include "pushswap.h"

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	int i;

	i = stack_a->size;
	while (i != -1)
	{
		if (stack_a->index < i && stack_b->index < i)
		   printf("\n");
		else if (stack_a->index >= i && stack_b->index < i)
			printf("%-4i\n", stack_a->arr[i]);
		else if (stack_a->index < i && stack_b->index >= i)
			printf("%10i\n", stack_b->arr[i]);
		else if (stack_a->index >= i && stack_b->index >= i)
			printf("%-4i%10i\n", stack_a->arr[i], stack_b->arr[i]);
		i--;
	}
	printf("____  ____\n  a    b\n");
}

void	init(t_stack *stack, int size)
{
	if (size <= 0)
	{
		printf("Negative size\nExit(1)\n");
		exit(1);
	}
	stack->arr = (int*)malloc(sizeof(int) * size);
	stack->size = size;
	stack->index = -1;
	stack->min_elem_index = 0;
}

int	main(void)
{
	int n;
	int s;
	t_stack a;
	t_stack b;

	write(1, "\nsize = ", 8);
	scanf("%i", &n);
	init(&a, n);
	init(&b, n);
	return (0);
}