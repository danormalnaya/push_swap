/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:33:54 by lloko             #+#    #+#             */
/*   Updated: 2022/04/06 17:02:28 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_argv(char *str)
{
	int	i;
	int	space;
	int	digit;

	i = 0;
	space = 0;
	digit = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			++space;
		if (ft_isdigit(str[i]))
			++digit;
		if (space && digit)
			return (1);
		i++;
	}
	return (0);
}

void	split_free(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		++i;
	}
	free(split);
}

void	init_stack(t_stack **stack_a, int argc, char **argv)
{
	int		i;
	int		j;
	char	**st;

	check_args(argc, argv);
	i = 1;
	while (i < argc)
	{
		if (check_argv(argv[i]))
		{
			j = 0;
			st = ft_split(argv[i], ' ');
			while (st[j])
			{
				stackadd_back(stack_a, stack_new(ft_atoi(st[j])));
				j++;
			}
			split_free(st);
		}
		else
			stackadd_back(stack_a, stack_new(ft_atoi(argv[i])));
		i++;
	}
	if (check_duplicat(*stack_a) || check_integer(argc, argv))
		print_error();
}

void	stack_index(t_stack **stack, int size)
{
	t_stack	*tmp;
	int		i;
	int		*arr1;
	int		*arr2;

	i = 0;
	tmp = *stack;
	arr1 = malloc(sizeof(int) * (size + 1));
	arr2 = malloc(sizeof(int) * (size + 1));
	if (!arr1 || ! arr2)
		return ;
	arr1 = write_value_in_arr(tmp, arr1);
	arr2 = arr_copy(arr1, arr2, size);
	arr1 = sort_arr(arr1, size);
	while (tmp)
	{
		tmp->index = find_index_in_arr(arr1, arr2[i]);
		tmp = tmp->next;
		i++;
	}
	free(arr1);
	free(arr2);
}

int	compare(t_stack **stack, int index, int i)
{
	int	k;
	int	*arr;

	arr = malloc(sizeof(int) * (i + 1));
	if (!arr)
		return (0);
	arr = write_index_in_arr(*stack, arr);
	k = i;
	while (arr[i] != index)
		i--;
	k = k - i;
	i = 0;
	while (arr[i] != index)
		i++;
	free(arr);
	if (k < i)
		return (1);
	return (0);
}
