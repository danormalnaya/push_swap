/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:46:18 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 19:01:51 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*a)
	{
		if ((*a)->next)
		{
			tmp = *a;
			new = tmp;
			while (tmp->next->next)
			tmp = tmp->next;
			*a = tmp->next;
			tmp->next = NULL;
			(*a)->next = new;
		}
	}
	return (1);
}

int check_rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*b)
	{
		if ((*b)->next)
		{
			tmp = *b;
			new = tmp;
			while (tmp->next->next)
			tmp = tmp->next;
			*b = tmp->next;
			tmp->next = NULL;
			(*b)->next = new;
		}
	}
	return (1);
}

int check_rrr(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		if ((*a)->next && (*b)->next)
		{
			check_rra(a);
			check_rrb(b);
		}
	}
	return (1);
}
