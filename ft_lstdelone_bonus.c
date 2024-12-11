/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:41:29 by lzannis           #+#    #+#             */
/*   Updated: 2024/12/02 01:09:48 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	if (del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*
int	main(void)
{
	t_list *lst;
	t_list *lst = NULL;
	printf("taille de lst %d\n",ft_lstsize(lst));

	t_list *new = ft_lstnew(&new);

	ft_lstadd_front(&lst, new);
	printf("taille de lst %d\n",ft_lstsize(lst));

	new = ft_lstnew(&new);

	ft_lstadd_front(&lst, new);

	printf("taile de lst %d\n",ft_lstsize(lst));

}*/
