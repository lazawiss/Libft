/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:05:16 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/26 01:57:17 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n && *s1 == *s2)
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
	printf("%d | ",ft_strncmp(s1, s2, n));
	printf("%d\n",strncmp(s1, s2, n));
}
int	main(void)
{
	test("aaab", "bbbb", 0);
	test("", "bbbb", 1);
	test("aaab", "bbbb", 2);
	test("aaab", "bbbb", 3);
	test("aaab", "bbbb", 4);
	test("aaab", "aabb", 3);
	test("aaab", "aabb", 2);
}*/
