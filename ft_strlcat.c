/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:24:29 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/19 13:52:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (siz == 0)
		return (src_len);
	if (siz <= dst_len)
		return (src_len + siz);
	while (src[i] && i < (siz - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>

void memdisplay(char * data, int size)
{
	int	loop;

	loop = 0;
	printf("\n");
	while (loop != size)
	{
		printf("%d ", data[loop]);
		loop++;
	}
	loop = 0;
	printf("\n");
	while (loop != size)
	{
		printf("_ ");
		loop++;
	}
	printf("\n");
	printf("\n");
}

int	main(void)
{
	char  src[10] = "";
	char dst[20] = "";

	printf("ma fonction src initiale :");
	memdisplay(src, 10);
	printf("ma fonction dst initiale :");
	memdisplay(dst, 20);

	ft_strlcat(dst, src, 0);
	printf("%zu\n", ft_strlcat(dst,src, 0));

	printf("ma fonction dst finale :");
	memdisplay (dst, ft_strlen(dst));

	char  srca[10] = "";
    char dsta[20] = "";

    printf("la vraie fonction src initiale :");
    memdisplay(srca, 10);
    printf("la vraie fonction dst initiale :");
    memdisplay(dsta, 20);

	strlcat(dsta, srca, 0);
    printf("%zu\n", strlcat(dsta,srca, 0));

    printf("la vraie fonction dst finale :");
    memdisplay (dsta, ft_strlen(dsta));
	return (0);
}*/
