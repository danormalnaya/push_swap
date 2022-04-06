/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:25:19 by lloko             #+#    #+#             */
/*   Updated: 2022/04/06 17:05:48 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack	t_stack;

struct s_stack
{
	int		index;
	int		value;
	t_stack	*next;
};

t_stack		*stack_new(int value);
t_stack		*stack_last(t_stack *stack);
int			stack_len(t_stack *st);
void		stack_add(t_stack **stack, t_stack *new_elem);
void		stack_clear(t_stack *stack);
void		stackadd_back(t_stack **lst, t_stack *new);

void		print_error(void);
void		check_args(size_t argc, char **argv);
long long	ft_atol(const char *str);
int			check_integer(int argc, char **argv);
int			check_duplicat(t_stack *stack);
void		split_free(char **split);
int			*write_index_in_arr(t_stack *stack, int *arr);
int			*write_value_in_arr(t_stack *stack, int *arr);
int			*sort_arr(int *arr, int size);
int			*arr_copy(int *arr1, int *arr2, int size);
int			find_index_in_arr(int *arr, int index);
int			max_index(t_stack *stack);
int			min_index(t_stack *stack);
int			is_sorted(t_stack *stack);
void		init_stack(t_stack **stack_a, int argc, char **argv);
void		stack_index(t_stack **stack, int size);
int			compare(t_stack **stack, int index, int i);
void		sorting_up_to_5(t_stack **a, t_stack **b, int size);
void		longsort(t_stack **a, t_stack **b, int size);

void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		sa(t_stack **a, int both);
void		sb(t_stack **b, int both);
void		ra(t_stack **a, int both);
void		rb(t_stack **b, int both);
void		rra(t_stack **stack, int both);
void		rrb(t_stack **stack, int both);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);

int			check_sa(t_stack **a);
int			check_sb(t_stack **b);
int			check_ss(t_stack **a, t_stack **b);
int			check_rr(t_stack **a, t_stack **b);
int			check_rb(t_stack **b);
int			check_ra(t_stack **a);
int			check_rrr(t_stack **a, t_stack **b);
int			check_rrb(t_stack **b);
int			check_rra(t_stack **a);
int			check_pa(t_stack **a, t_stack **b);
int			check_pb(t_stack **a, t_stack **b);

#endif
