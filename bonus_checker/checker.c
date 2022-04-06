/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:03:27 by lloko             #+#    #+#             */
/*   Updated: 2022/04/06 17:00:02 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

static int	check_op(char *in, t_stack **a, t_stack **b)
{
	if (3 == ft_strlen(in) && !ft_strncmp(in, "sa\n", ft_strlen(in)))
		check_sa(a);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "sb\n", ft_strlen(in)))
		check_sb(b);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "ss\n", ft_strlen(in)))
		check_ss(a, b);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "ra\n", ft_strlen(in)))
		check_ra(a);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "rb\n", ft_strlen(in)))
		check_rb(b);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "rr\n", ft_strlen(in)))
		check_rr(a, b);
	else if (4 == ft_strlen(in) && !ft_strncmp(in, "rra\n", ft_strlen(in)))
		check_rra(a);
	else if (4 == ft_strlen(in) && !ft_strncmp(in, "rrb\n", ft_strlen(in)))
		check_rrb(b);
	else if (4 == ft_strlen(in) && !ft_strncmp(in, "rrr\n", ft_strlen(in)))
		check_rrr(a, b);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "pa\n", ft_strlen(in)))
		check_pa(a, b);
	else if (3 == ft_strlen(in) && !ft_strncmp(in, "pb\n", ft_strlen(in)))
		check_pb(a, b);
	else
		return (0);
	return (1);
}

static void	read_instructions(t_stack **a, t_stack **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!check_op(str, a, b))
			print_error();
		free(str);
		str = get_next_line(0);
	}
	free(str);
	if (!is_sorted(*a) && !(*b))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

void	print_i(t_stack *stack)
{
	while (stack)
	{
		ft_putnbr_fd(stack->value, 1);
		ft_putchar_fd(' ', 1);
		stack = stack->next;
	}
	ft_putchar_fd('\n', 1);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (ac > 2)
	{
		a = NULL;
		b = NULL;
		init_stack(&a, ac, av);
		if (!a)
			return (0);
		i = stack_len(a);
		stack_index(&a, i);
		read_instructions(&a, &b);
		if (a)
			stack_clear(a);
		if (b)
			stack_clear(b);
	}
}
