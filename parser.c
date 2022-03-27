/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:10:58 by lloko             #+#    #+#             */
/*   Updated: 2022/03/27 18:34:40 by lloko            ###   ########.fr       */
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

// в main прописать, что применять нужно к каждой строке
int	check_integer(int argc, char *argv)
{
	int	i;
	int	len;
	int	sin;

	i = 0;
	len = 0;
	sign = 0;
	while (i < argc)
	{
		if (argv[i] == '-' || argv[i] == '+')
			i++;
		while (argv[i] >= '0' && argv[i] <= '9')
		{
			len += 1;
			i++;
		}
		if ((sin == -1 && ft_atoi(argv) > 0) || (sin == 0 && ft_atoi(argv) < 0))
			return (0);
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
