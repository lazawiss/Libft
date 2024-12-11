/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:55:27 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/15 00:22:30 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 55;
	char	character = (char) c;
	unsigned char decimal = (unsigned char) c;
	printf("Is c in the ASCII table? %d\n", ft_isascii(c));
	printf("Which character is c? %c\n", character);
	printf("Which ASCII code is c? %u\n", decimal);
	printf("The real function? %d\n", isascii(c));
	return (0);
}*/
