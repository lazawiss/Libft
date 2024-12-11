/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:37:09 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/29 19:58:22 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	j = 0;
	ptr = (char *)malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[start] && (len > 0))
	{
		ptr[j] = s[start];
		j++;
		start++;
		len--;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("bonjour", 2, 2));


}*/
