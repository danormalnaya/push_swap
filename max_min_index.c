/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:51:39 by lloko             #+#    #+#             */
/*   Updated: 2022/03/27 17:55:33 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_index(t_stack *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (max < stack->index)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	min_index(t_stack *stack)
{
	int	min;

	min = stack->index;
	while (stack)
	{
		if (min > stack->index)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}

int	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if ((stack->index + 1) == stack->next->index)
			stack = stack->index;
		else
			return (1);
	}
	return (0);
}

void	print(t_stack *stack)
{
	while (stack)
	{
		ft_putnbr_fd(stack->value, 1);
		ft_putchar_fd(' ', 1);
		stack = stack->next;
	}
	ft_putchar_fd('\n', 1);
}
