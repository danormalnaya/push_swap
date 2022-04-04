/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:53:33 by lloko             #+#    #+#             */
/*   Updated: 2022/04/04 21:55:33 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

int	check_sa(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*a)
	{
		if ((*a)->next)
		{
			tmp = *a;
			new = tmp->next->next;
			*a = (*a)->next;
			(*a)->next = tmp;
			(*a)->next->next = new;
		}
	}
	return (1);
}

int	check_sb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*b)
	{
		if ((*b)->next)
		{
			tmp = *b;
			new = tmp->next->next;
			*b = (*a)->next;
			(*b)->next = tmp;
			(*b)->next->next = new;
		}
	}
	return (1);
}

int	check_ss(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		if ((*b)->next && (*a)->next)
		{
			check_sa(a);
			check_sb(b);
		}
	}
	return (1);
}
