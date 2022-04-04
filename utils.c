/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:40:12 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 14:14:32 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*res;

	res = malloc(sizeof(t_stack));
	if (!res)
		return (NULL);
	res->value = value;
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

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	stack_add(t_stack **stack, t_stack *new_elem)
{
	if (!stack && !new_elem)
		return ;
	new_elem->next = *stack;
	*stack = new_elem;
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
