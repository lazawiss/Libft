/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:29:32 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/28 00:40:55 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

void    memdisplay(char * data, int size)
{
    int loop;

    loop = 0;
    printf("\n");
    while (loop != size)
    {
        printf("[%c] ", data[loop]);
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

int main(void)
{
    char source[5] = "";
    char dest[5];

    printf("source :");
    memdisplay(source, 15);

    printf("Destination :");
    memdisplay(dest, 15);

    ft_memmove(((void *)0),source,0);

    printf("Source :");
    memdisplay(source, 15);

    printf("Destination :");
    memdisplay(dest, 15);
    char sourca[5] = "";
    char desta[5];

    printf("source :");
    memdisplay(sourca, 15);

    printf("Destination :");
    memdisplay(desta, 15);

    memmove(((void *)0),sourca,0);

	printf("Source :");
    memdisplay(sourca, 15);

    printf("Destination :");
    memdisplay(desta, 15);

    return (0);
}*/
