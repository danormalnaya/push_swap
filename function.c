/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:26:03 by lloko             #+#    #+#             */
/*   Updated: 2022/03/27 19:18:56 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ft_putnbr_fd and ft_putchar_fd

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

int	ft_atoi(const char *str)
{
	long long	i;
	long long	sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * sign < (-9223372036854775807L))
			return (0);
		if (result * sign > (9223372036854775807L))
			return (-1);
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
