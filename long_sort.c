/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:49:07 by lloko             #+#    #+#             */
/*   Updated: 2022/04/02 15:52:44 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_push_a(t_stack **a, t_stack **b)
{
	while (*b)
	{
		if (!b)
			break ;
		if ((*b)->index != max_index(*b)
			&& !compare(b, max_index(*b), stack_len(*b)))
			rr(b, 'b');
		else if ((*b)->index != max_index(*b)
			&& compare(b, max_index(*b), stack_len(*b)))
			rr(b, 'b');
		else if ((*b)->index == max_index(*b))
			p(a, b, 'b');
	}
}

static void	sort_100(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (*a)
	{
		if (i > 1 && (*a)->index <= i)
		{
			p(a, b, 'b');
			i++;
			r(b, 'b');
		}
		else if ((*a)->index <= i + 15)
		{
			p(a, b, 'b');
			i++;
		}
		else if ((*a)->index >= i)
			r(a, 'a');
	}
	sort_push_a(a, b);
}

static void	sort_500(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (*a)
	{
		if (i > 1 && (*a)->index <= i)
		{
			p(a, b, 'b');
			i++;
			r(b, 'b');
		}
		else if ((*a)->index <= i + 30)
		{
			p(a, b, 'b');
			i++;
		}
		else if ((*a)->index >= i)
			r(a, 'a');
	}
	sort_push_a(a, b);
}

void	longsort(t_stack **a, t_stack **b, int size)
{
	if (size <= 100)
		sort_100(a, b);
	else
		sort_500(a, b);
}
