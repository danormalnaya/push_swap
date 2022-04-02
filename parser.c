/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:10:58 by lloko             #+#    #+#             */
/*   Updated: 2022/04/02 17:45:02 by lloko            ###   ########.fr       */
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
		if (argv[i][j] == '\0')
			print_error();
		while (j < ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_integer(int ac, char **av)
{
	size_t	j;
	int		i;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
			j++;
		while (j < ft_strlen(av[i]))
		{
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_dup(int argc, char **argv)
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
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	parser_argum(int ac, char **av)
{
	return (check_dup(ac, av) && check_digit(ac, av) && check_integer(ac, av));
}
