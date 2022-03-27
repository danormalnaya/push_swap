/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:32:53 by lloko             #+#    #+#             */
/*   Updated: 2022/03/27 14:52:37 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack, char name)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	new = stack->next->next;
	*stack = (*stack)->next;
	stack->next = tmp;
	stack->next->next = new;
	write(1, "s", 1);
	write(1, &name, 1);
	write(1, "\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a, 'a');
	swap(b, 'b');
	write(1, "ss\n", 3);
}

void	p(t_stack **a, t_stack	**b, char name)
{
	t_stack	*tmp;

	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "p", 1);
	write(1, &name, 1);
	write(1, "\n", 1);
}
