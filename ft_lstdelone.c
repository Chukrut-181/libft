/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:51:33 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:48:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/* ft_lstdelone elimina un nodo de una lista enlazada y libera su memoria.
Primero, verifica si el nodo es NULL y, si no lo es, llama a la función del
para liberar la memoria del contenido del nodo.
Luego, utiliza free para liberar la memoria del nodo en sí. */