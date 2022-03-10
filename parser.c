/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:10:58 by lloko             #+#    #+#             */
/*   Updated: 2022/03/10 18:16:40 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit(int argc, char **argv)
{
	int		i;
	size_t	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while ((argv[i][j] >= '\t' && argv[i][j] <= '\r') || argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (argv[i][j] == '\0') // если - и после него нет аргумента
			print_error();
		while (j < ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_integer(char *argv) // в main прописать, что применять нужно к каждой строке
{
	int	i;
	int	len;
	int	sign;

	i = 0;
	len = 0;
	sign = 0;
	while ((argv[i] >= '\t' && argv[i] <= '\r') || argv[i] == ' ')
		i++;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
		{
			len += 1;
			sign = -1;
		}
		i++;
	}
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		len += 1;
		i++;
	}
	if ((sign == -1 && ft_atoi(argv) > 0) \
		|| (sign == 0 && ft_atoi(argv) < 0) || len > 11)
		return (1);
	return (0);
}

int	check_duplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	b;

	if (argc >= 2)
	{
		if (check_duplicates(argc, argv) == 1)
			print_error();
		if (check_digit(argc, argv) == 1)
			print_error();
		b = 1;
		while (b < argc)
		{
			if (check_integer(argv[b]) == 1)
				print_error();
			b++;
		}
	}
	return (0);
}
