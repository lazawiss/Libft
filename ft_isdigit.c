/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:54:31 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/14 23:14:10 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int     main(void)
{
        int     c = 57 ;
        char number = (char) c;
        unsigned char decimal  = (unsigned char) c;
        printf("Is c a digit :%d\n", ft_isdigit(c));
        printf("Character representation :%c\n", number);
        printf("Decimal representation :%u\n", decimal);
	printf("the real fonction :%d\n", isdigit(c));
        return (0);
}*/
