/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:47:09 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:27:58 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstmap:
		Iterates over the linked list 'lst', applying the function 'f'
		to the content of each node. Creates a new list by allocating
		new nodes with the results of 'f'.
		If memory allocation fails, the function clears the new list
		and returns NULL.
	Parameters:
		lst - 	A pointer to the first node of the linked list.
		f - 	A function pointer to a function that takes a void pointer
				as its parameter and returns a new value
				(to be stored in the new list's node).
		del - 	A function pointer to a function that will be used to free
				the content of a node in case of failure.
	Return:
		A pointer to the new linked list where each node contains the result
		of applying 'f' to the corresponding node in 'lst'.
		NULL if memory allocation fails.
*/
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