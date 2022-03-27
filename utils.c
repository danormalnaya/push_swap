/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:40:12 by lloko             #+#    #+#             */
/*   Updated: 2022/03/27 17:31:44 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int content)
{
	t_stack	*res;

	res = malloc(sizeof(*res));
	if (!res)
		return (0);
	res->content = content;
	res->next = NULL;
	return (res);
}

int	stack_len(t_stack *st)
{
	int	len;

	len = 0;
	while (st)
	{
		len++;
		st = st->next;
	}
	return (len);
}

t_stack	*stack_last(t_stack *lst)
{
	t_stack	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	stackadd_back(t_stack **lst, t_stack *new)
{
	if (!*lst)
		(*lst) = new;
	else
		stack_last(*lst)->next = new;
}

void	stack_clear(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}
