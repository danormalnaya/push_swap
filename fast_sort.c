/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:48:18 by lloko             #+#    #+#             */
/*   Updated: 2022/04/02 17:51:32 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2_items(t_stack **stack)
{
	if ((*stack)->next->index < (*stack)->index)
		swap(stack, 'a');
}

static void	sort_3_items(t_stack **stack)
{
	if ((*stack)->index == max_index(*stack))
		swap(stack, 'a');
	if ((*stack)->index == min_index(*stack)
		&& (*stack)->next->index == max_index(*stack))
	{
		rr(stack, 'a');
		swap(stack, 'a');
	}
	if ((*stack)->index != min_index(*stack)
		&& (*stack)->index > (*stack)->next->index)
		swap(stack, 'a');
	if ((*stack)->index != min_index(*stack)
		&& (*stack)->index < (*stack)->next->index)
		rr(stack, 'a');
}

static void	sort_4_items(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*a)->index > min_index(*a)
			&& !compare(a, min_index(*a), stack_len(*a)))
			r(a, 'a');
		else if ((*a)->index > min_index(*a)
			&& compare(a, min_index(*a), stack_len(*a)))
			rr(a, 'a');
		else
		{
			p(a, b, 'b');
			i++;
		}
	}
	if ((*a)->index != min_index(*a))
		swap(a, 'a');
	while (*b)
		p(a, b, 'a');
}

static void	sort_5_items(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((*a)->index > min_index(*a)
			&& !compare(a, min_index(*a), stack_len(*a)))
			r(a, 'a');
		else if ((*a)->index > min_index(*a)
			&& compare(a, min_index(*a), stack_len(*a)))
			rr(a, 'a');
		else
		{
			p(a, b, 'b');
			i++;
		}
	}
	if ((*a)->index != min_index(*a))
		swap(a, 'a');
	while (*b)
		p(a, b, 'a');
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
