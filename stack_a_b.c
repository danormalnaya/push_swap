/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:49:01 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 14:49:11 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a && *stack_b && (*stack_a)->next && (*stack_b)->next)
	{
		sa(stack_a, 0);
		sb(stack_b, 0);
		ft_putendl_fd("ss", 1);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a && *stack_b && (*stack_a)->next && (*stack_b)->next)
	{
		ra(stack_a, 0);
		rb(stack_b, 0);
		ft_putendl_fd("rr", 1);
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a && *stack_b && (*stack_a)->next && (*stack_b)->next)
	{
		rra(stack_a, 0);
		rrb(stack_b, 0);
		ft_putendl_fd("rrr", 1);
	}
}
