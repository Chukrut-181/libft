/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:56:16 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:51:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* ft_lstlast recorre la lista enlazada desde el nodo inicial hasta llegar
al último nodo (donde lst->next es NULL) y devuelve un puntero a ese nodo.
Si la lista está vacía (es decir, lst es NULL), la función devuelve NULL
para indicar que no hay último nodo. */