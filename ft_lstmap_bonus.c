/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:47:09 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/30 14:39:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*element;
	void	*e;

	new_list = NULL;
	if (lst == NULL)
		return (new_list);
	while (lst)
	{
		e = f(lst->content);
		element = ft_lstnew(e);
		if (!element)
		{
			free (e);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}

/* ft_lstmap crea una nueva lista a partir de una lista original,
aplicando una función (f) a cada nodo para obtener el contenido de
los nuevos nodos. Si ocurre un error durante el proceso, libera cualquier
memoria asignada y retorna NULL. Si todo funciona correctamente,
retorna la nueva lista. */