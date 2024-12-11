/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:44:40 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/30 17:27:50 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	countword;

	if (!s)
		return (0);
	i = 0;
	countword = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			countword++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (countword);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_alloc(char const *s, int wordlen)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc (sizeof(char) * (wordlen + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, (wordlen + 1));
	return (ptr);
}

static char	**ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;

	i = 0;
	j = -1;
	ptr = (char **)malloc (sizeof(char *) * (count_word(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			j++;
			ptr[j] = ft_alloc((s + i), ft_wordlen((s + i), c));
			if (!ptr[j])
				return (ft_free(ptr));
			i += ft_wordlen((s + i), c);
		}
	}
	j++;
	ptr[j] = NULL;
	return (ptr);
}
/*
int	main(void)
{
	char a[] = ",ard,,  owg,,,,HTO";
	char c = ',';
	char **b = ft_split(a, c);
	int	i;

	i = 0;
	printf("chaine a :%s | ma fonction \n",a);
	while (b[i])
	{
		printf("'%s',\n", b[i]);
		i++;
	}
	ft_free(b);
	return (0);
}*/
