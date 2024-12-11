/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 01:28:07 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/30 15:07:52 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *lst = NULL;
	printf("taille de lst %d\n",ft_lstsize(lst));

	t_list *new = ft_lstnew(&new);

	ft_lstadd_front(&lst, new);
	printf("taille de lst %d\n",ft_lstsize(lst));

	new = ft_lstnew(&new);

	ft_lstadd_front(&lst, new);

	printf("taile de lst %d\n",ft_lstsize(lst));
}*/
