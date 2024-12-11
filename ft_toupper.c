/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:53:15 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/19 19:02:51 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c = 97;
	char character = (char) c;
	unsigned char decimal = (unsigned char) c;
	printf("The uppercase of c is %d\n", ft_toupper(c));
	printf("The character of c is %c\n", character);
	printf("The character uppercase of c is %c\n", ft_toupper(character));
	printf("Original ascii code of c is %u\n", decimal);
	printf("The real function : %d\n", toupper(c));
	return (0);
}*/
