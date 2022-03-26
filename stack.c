/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:40:12 by lloko             #+#    #+#             */
/*   Updated: 2022/03/26 16:28:32 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*res;

	res = malloc(sizeof(*res));
	if (!res)
		return (0);
	res->content = content;
	res->next = NULL;
	return (res);
}

int	ft_stacklen(t_stack *st)
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

t_stack	*ft_stacklast(t_stack *lst)
{
	t_stack	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	if (!*lst)
		(*lst) = new;
	else
		ft_stacklast(*lst)->next = new;
}

t_stack	*ft_stackmin(t_stack *st)
{
	t_stack	*tmp;

	tmp = st;
	if (tmp->content < ft_stacklast(tmp)->content)
		return (tmp);
	while (tmp->content < tmp->next->content)
		tmp = tmp->next;
	return (tmp->next);
}
