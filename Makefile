checker_push_swap:
	@make -C printf/
	@gcc check/*.c printf/libftprintf.a  -Wall -Werror -Wextra -o checker
	@gcc pushswap/*.c printf/libftprintf.a -Wall -Werror -Wextra -o push_swap
	@echo "./checker compiled"
	@echo "./push_swap compiled"
fclean:
	@rm checker push_swap
