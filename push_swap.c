/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:20:57 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 17:03:39 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	if (argc > 2)
	{
		if (parser_argum(argc, argv) == 0)
			print_error();
		stack_a = NULL;
		stack_b = NULL;
		init_stack(&stack_a, argc, argv);
		i = stack_len(stack_a);
		stack_index(&stack_a, i);
		if (!is_sorted(stack_a))
			exit(EXIT_SUCCESS);
		if (i <= 5)
			sorting_up_to_5(&stack_a, &stack_b, i);
		else
			longsort(&stack_a, &stack_b, i);
		if (stack_a)
			stack_clear(stack_a);
		if (stack_b)
			stack_clear(stack_b);
	}
}
