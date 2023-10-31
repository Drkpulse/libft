/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:50:28 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/31 15:12:42 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !del)
		return ;
	new = *lst;
	while (new)
	{
		temp = new -> next;
		(*del)(new -> content);
		free(new);
		new = temp;
	}
	*lst = NULL;
}
