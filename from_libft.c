/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:36:17 by lloko             #+#    #+#             */
/*   Updated: 2022/04/02 17:35:45 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd > 0)
	{
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
		write(fd, "\n", 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	if (fd > 0)
	{
		s = ft_itoa(n);
		ft_putendl_fd(s, fd);
		free(s);
	}
}

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
}
