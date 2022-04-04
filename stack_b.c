/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:48:28 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 19:02:02 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	ft_putendl_fd("pb", 1);
}

void	sb(t_stack **b, int both)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *b;
	tmp1 = tmp->next->next;
	*b = (*b)->next;
	(*b)->next = tmp;
	(*b)->next->next = tmp1;
	if (both)
		ft_putendl_fd("sb", 1);
}

void	rb(t_stack **b, int both)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *b;
	tmp1 = *b;
	*b = (*b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	if (both)
		ft_putendl_fd("rb", 1);
}

void	rrb(t_stack **b, int both)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *b;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*b = tmp->next;
	tmp->next = NULL;
	(*b)->next = tmp1;
	if (both)
		ft_putendl_fd("rrb", 1);
}
