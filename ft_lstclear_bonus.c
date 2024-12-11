/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:45:23 by lzannis           #+#    #+#             */
/*   Updated: 2024/12/02 01:06:19 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
void printdel(void *param)
{
	(void)param;
	printf("del?\n");
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew(&new);

	ft_lstadd_front(&lst, new);

	new = ft_lstnew(&new);

	ft_lstadd_front(&lst, new);

	printf("taille de lst %d\n",ft_lstsize(lst));
	
	ft_lstclear(&lst, printdel);

	printf("taille de lst %d\n",ft_lstsize(lst));
}*/
