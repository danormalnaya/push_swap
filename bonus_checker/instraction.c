/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:35:00 by lloko             #+#    #+#             */
/*   Updated: 2022/04/04 21:55:17 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

int	check_pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b)
	{
		tmp = *b;
		*b = tmp->next;
		tmp->next = *a;
		*a = tmp;
	}
	return (1);
}

int	check_pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a)
	{
		tmp = *a;
		*a = tmp->next;
		tmp->next = *b;
		*b = tmp;
	}
	return (1);
}

int	check_ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*a)
	{
		if ((*a)->next)
		{
			tmp = *a;
			new = *a;
			*a = (*a)->next;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
			tmp->next->next = NULL;
		}
	}
	return (1);
}

int	check_rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*b)
	{
		if ((*b)->next)
		{
			tmp = *b;
			new = *b;
			*b = (*b)->next;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
			tmp->next->next = NULL;
		}
	}
	return (1);
}

int	check_rr(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		if ((*a)->next && (*b)->next)
		{
			check_ra(a);
			check_rb(b);
		}
	}
	return (1);
}
