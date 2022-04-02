/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:25:19 by lloko             #+#    #+#             */
/*   Updated: 2022/04/02 17:42:18 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack	t_stack;

struct s_stack
{
	int		index;
	int		value;
	t_stack	*next;
};

t_stack	*stack_new(int content);
t_stack	*stack_last(t_stack *lst);
int		stack_len(t_stack *st);
void	stackadd_back(t_stack **lst, t_stack *new);
void	stack_clear(t_stack *stack);

void	print_error(void);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int d);
int		ft_atoi(const char *str);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);

int		check_digit(int argc, char **argv);
int		check_integer(int argc, char **argv);
int		check_dup(int argc, char **argv);
int		parser_argum(int ac, char **av);
int		*write_index_in_arr(t_stack *stack, int *arr);
int		*write_value_in_arr(t_stack *stack, int *arr);
int		*sort_arr(int *arr, int size);
int		*arr_copy(int *arr1, int *arr2, int size);
int		find_index_in_arr(int *arr, int index);
int		max_index(t_stack *stack);
int		min_index(t_stack *stack);
int		is_sorted(t_stack *stack);
void	print(t_stack *stack);
void	init_stack(t_stack **stack_a, int argc, char **argv);
void	stack_index(t_stack **stack, int size);
int		compare(t_stack **stack, int index, int i);
void	sorting_up_to_5(t_stack **a, t_stack **b, int size);
void	longsort(t_stack **a, t_stack **b, int size);

void	swap(t_stack **stack, char name);
void	ss(t_stack **a, t_stack **b);
void	p(t_stack **a, t_stack	**b, char name);
void	r(t_stack **stack, char name);
void	rab(t_stack **a, t_stack **b);
void	rr(t_stack **stack, char name);
void	rrr(t_stack **a, t_stack **b);

#endif
