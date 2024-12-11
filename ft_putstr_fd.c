/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:34:51 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/24 22:42:19 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_fd("", 1);
	ft_putstr_fd("hello", 2);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("salut", 0);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("saaaaalut", 4);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("saaaaalut", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("52468", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("*_()!<>", 1);
}*/
