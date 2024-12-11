/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:09:11 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/26 01:51:51 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && *(char *)s1 == *(char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>

void	test(char *s1, char *s2, size_t n)
{
	printf(" ma fomction %d | la vraie ",ft_memcmp(s1, s2, n));
	printf("%d\n",memcmp(s1, s2, n));
}
int	main(void)
{
	test("aaab", "bbbb", 0);
	test("", "bbbb", 1);
	test("aaab", "bbbb", 2);
	test("aaab", "bbbb", 3);
	test("aaab", "bbbb", 4);
	test("aaab", "aabb", 3);
	test("atoms\0\0\0\0","atoms\0abc", 8);
}*/
