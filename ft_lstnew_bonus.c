/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:09:54 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:41:24 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* ft_lstnew crea un nuevo nodo para una lista enlazada, asigna el
contenido pasado como argumento a este nodo, inicializa su campo next a NULL
y devuelve el puntero al nuevo nodo.
Si la asignación de memoria falla, devuelve NULL. */