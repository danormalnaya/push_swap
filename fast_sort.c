/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:48:18 by lloko             #+#    #+#             */
/*   Updated: 2022/03/27 19:12:57 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_sawp.h"

static void	sort_2_items(t_stack **stack)
{
	if (*stack)->next->index < (*stack)->index)
		swap(stack, a);
}

static void	sort_3_items(t_stack **stack)
{
	if ((*stack)->index == max_index(*stack))
		swap(stack, a);
	if ((*stack)->index == min_index(*stack) && (*stack)->next->index == max_index(*stack))
	{
		rr(stack, a);
		swap(stack, a);
	}
	if ((*stack)->index != min_index(*stack) && (*stack)->index > (*stack)->next->index)
		swap(stack, a);
	if ((*stack)->index != min_index(*stack) && (*stack)->index < (*stack)->next->index)
		rr(stack, a);
}

static void	sort_4_items(t_stack **stack)