/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:33:42 by lloko             #+#    #+#             */
/*   Updated: 2022/03/26 18:50:05 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = stack->next;
	ft_stackadd_back(stack, tmp);
	tmp->next = NULL;
	write(1, "r", 1);
	write(1, &name, 1);
	write(1, "\n", 1);
}

void	rab(t_stack **a, t_stack **b)
{
	r(a, 'a');
	r(b, 'b');
	write(1, "rr", 2);
	write(1, "\n", 1);
}

void	rr(t_stack **stack, char name)
{
	t_stack	*tmp;
	t_stack	*new;

	tmp = *stack;
	new = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	stack = tmp->next;
	tmp->next = NULL;
	stack->next = new;
	write(1, "rr", 2);
	write(1, &name, 1);
	write(1, "\n", 1);
}
