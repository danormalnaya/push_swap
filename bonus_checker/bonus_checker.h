/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:29:42 by lloko             #+#    #+#             */
/*   Updated: 2022/04/04 22:39:40 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_CHECKER_H
# define BONUS_CHECKER_H

# include "../libft/libft.h"
# include "../gnl/get_next_line.h"
# include "../push_swap.h"
# include <stdlib.h>

int	check_pa(t_stack **a, t_stack **b);
int	check_pb(t_stack **a, t_stack **b);
int	check_ra(t_stack **a);
int	check_rb(t_stack **b);
int	check_rr(t_stack **a, t_stack **b);
int	check_rra(t_stack **a);
int	check_rrb(t_stack **b);
int	check_rrr(t_stack **a, t_stack **b);
int	check_sa(t_stack **a);
int	check_sb(t_stack **b);
int	check_ss(t_stack **a, t_stack **b);

#endif
