/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:37:27 by lloko             #+#    #+#             */
/*   Updated: 2022/04/03 14:53:09 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*write_index_in_arr(t_stack *stack, int *arr)
{
	int	i;

	i = 0;
	if (!stack || !arr)
		return (0);
	while (stack)
	{
		arr[i] = stack->index;
		stack = stack->next;
		i++;
	}
	return (arr);
}

int	*write_value_in_arr(t_stack *stack, int *arr)
{
	int	i;

	i = 0;
	if (!stack || !arr)
		return (0);
	while (stack)
	{
		arr[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (arr);
}

int	*sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	if (!arr || !size)
		return (0);
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*arr_copy(int *arr1, int *arr2, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr2[i] = arr1[i];
		i++;
	}
	return (arr2);
}

int	find_index_in_arr(int *arr, int index)
{
	int	i;

	i = 0;
	while (arr[i] != index)
		i++;
	return (i);
}
