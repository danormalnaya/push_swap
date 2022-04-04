/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:03:27 by lloko             #+#    #+#             */
/*   Updated: 2022/04/04 21:54:51 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

static int	check_op(char *str, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(str, "pa", 2))
		return (check_pa(a, b));
	if (!ft_strncmp(str, "pb", 2))
		return (check_pb(a, b));
	if (!ft_strncmp(str, "sa", 2))
		return (check_sa(a));
	if (!ft_strncmp(str, "sb", 2))
		return (check_sb(b));
	if (!ft_strncmp(str, "ss", 2))
		return (check_ss(a, b));
	if (!ft_strncmp(str, "rra", 3))
		return (check_rra(a));
	if (!ft_strncmp(str, "rrb", 3))
		return (check_rrb(b));
	if (!ft_strncmp(str, "rrr", 3))
		return (check_rrr(a, b));
	if (!ft_strncmp(str, "ra", 2))
		return (check_ra(a));
	if (!ft_strncmp(str, "rb", 2))
		return (check_rb(b));
	if (!ft_strncmp(str, "rr", 2))
		return (check_rr(a, b));
	return (0);
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
		if (!parser_argum(ac, av))
			print_error();
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
