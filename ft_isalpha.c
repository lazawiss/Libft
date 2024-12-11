/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:45:56 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/15 23:39:14 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c = 65;
	char letter = (char) c;
	unsigned char character  = (unsigned char) c;
	printf("Is c an letter :%d\n", ft_isalpha(c));
	printf("What letter is c ?%c\n", letter);
	printf("What code Ascii is c ?%u\n", character);
	printf("The real function :%d\n", isalpha(c));
	return (0);
}*/
