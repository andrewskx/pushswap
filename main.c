#include "pushswap.h"

int	main(int arg, char **argv)
{
	t_stack a;
	t_stack b;
	int		i;
	
	if (!validation(arg, argv))
	{
		write(1, "Error\n", 6);
		return (0); 
	}
	i = 1;
	init(&a, arg - 1);
	init(&b, arg - 1);
	while (i < arg)
	{
		push(&a, atoi(argv[i]));
		i++;
	}
	sort_algorithm(&a, &b);
	// print_stack(&a, &b);
	delete_mem(&a, &b);
	return (0);
}
