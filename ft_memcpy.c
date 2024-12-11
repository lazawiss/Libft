/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:40:58 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/26 01:42:07 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

void	memdisplay(char * data, int size)
{
	int	loop;

	loop = 0;
	printf("\n");
	while (loop != size)
	{
		printf("[%d] ", data[loop]);
		loop +=1;
	}
	loop = 0;
	printf("\n");
	while (loop != size)
	{
		printf("_ ");
		loop +=1;
	}
	printf("\n");
	printf("\n");
	printf("\n");
}

int	main(void)
{
	char source[] = "";
	char dest[15];

	printf("source :");
	memdisplay(source, 15);

	printf("Destination :");
	memdisplay(dest, 15);

	ft_memcpy(dest,source,0);

	printf("Source :");
	memdisplay(source, 15);

	printf("Destination :");
	memdisplay(dest, 15);
	char sourca[] = "";
	char desta[15];

	printf("source :");
	memdisplay(sourca, 15);

	printf("Destination :");
	memdisplay(desta, 15);

	memcpy(desta,sourca,0);

	printf("Source :");
	memdisplay(sourca, 15);

	printf("Destination :");
	memdisplay(desta, 15);

	return (0);
}*/
