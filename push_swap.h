/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:25:19 by lloko             #+#    #+#             */
/*   Updated: 2022/03/10 16:24:35 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	print_error(void);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int d);
int		ft_atoi(const char *str);

int	check_digit(int argc, char **argv);
int	check_duplicates(int argc, char **argv);

#endif