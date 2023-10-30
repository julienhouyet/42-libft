/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:40:11 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/30 13:47:09 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*changed_elem;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		changed_elem = ft_lstnew(f(lst->content));
		if (!changed_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, changed_elem);
		lst = lst->next;
	}
	return (new_list);
}
