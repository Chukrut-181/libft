/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:58:16 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:53:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	list_size;

	list_size = 0;
	while (lst)
	{
		list_size++;
		lst = lst->next;
	}
	return (list_size);
}

/* ft_lstsize calcula y devuelve el número de nodos en una lista enlazada.
Recorre la lista desde la cabeza hasta el final, contando cada nodo
que encuentra, y luego devuelve el contador. */