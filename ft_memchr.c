/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:42:16 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/18 11:23:10 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans memory for a byte
 *
 * @param s Pointer to the memory area to scan
 * @param c Byte value to search for
 * @param n Number of bytes to scan in s
 *
 * @return A pointer to the matching byte in memory, or NULL if the byte
is not found within the first n bytes
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	char			found;
	unsigned int	i;
	unsigned char	cast_c;
	unsigned char	*cast_s;

	i = 0;
	found = -1;
	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	while (i < n)
	{
		if (cast_s[i] == cast_c)
		{
			found = i;
			break ;
		}
		i++;
	}
	if (found == -1)
		return (0);
	return ((void *)s + found);
}
/*
#include <stdio.h>

void	test(char *s, int c, size_t n)
{
	printf("%p | ", ft_memchr(s,c,n));
	printf("%p\n",memchr(s,c,n));
}

int	main(void)
{
	test("aaab", 'b', 0);
	test("", 'b', 5);
	test("aaabdqf", 'b',8);
	test("aaab", 'b', 3);
	test("aaab", ' ', 4);
	test("aaab", 'a', 3);
	test("aaab", 'a', 6);
}*/
