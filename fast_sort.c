/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:48:18 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 16:23:33 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2_items(t_stack **stack)
{
	if ((*stack)->next->index < (*stack)->index)
		sa(stack, 1);
}

static void	sort_3_items(t_stack **stack)
{
	if ((*stack)->index == max_index(*stack))
		ra(stack, 1);
	if ((*stack)->index == min_index(*stack)
		&& (*stack)->next->index == max_index(*stack))
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	if ((*stack)->index != min_index(*stack)
		&& (*stack)->index > (*stack)->next->index)
		sa(stack, 1);
	if ((*stack)->index != min_index(*stack)
		&& (*stack)->index < (*stack)->next->index)
		rra(stack, 1);
}

static void	sort_4_items(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*a)->index > min_index(*a)
			&& !compare(a, min_index(*a), stack_len(*a)))
			ra(a, 1);
		else if ((*a)->index > min_index(*a)
			&& compare(a, min_index(*a), stack_len(*a)))
			rra(a, 1);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != min_index(*a))
		sa(a, 1);
	while (*b)
		pa(a, b);
}

static void	sort_5_items(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((*a)->index > min_index(*a)
			&& !compare(a, min_index(*a), stack_len(*a)))
			ra(a, 1);
		else if ((*a)->index > min_index(*a)
			&& compare(a, min_index(*a), stack_len(*a)))
			rra(a, 1);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != min_index(*a))
		sa(a, 1);
	while (*b)
		pa(a, b);
}

void	sorting_up_to_5(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		sort_2_items(a);
	else if (size == 3)
		sort_3_items(a);
	else if (size == 4)
		sort_4_items(a, b);
	else if (size == 5)
		sort_5_items(a, b);
}
