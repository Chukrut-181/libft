/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:09:00 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:50:19 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
	*lst = NULL;
}

/* ft_lstclear elimina todos los nodos de una lista enlazada y libera su memoria
utilizando la función de eliminación proporcionada (del).
Recorre la lista, elimina y libera cada nodo, y finalmente establece *lst a NULL
para indicar que la lista está vacía. */