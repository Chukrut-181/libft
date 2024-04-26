/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:09:11 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:53:20 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/* ft_lstadd_front agrega un nuevo nodo (new) al principio de una
lista enlazada. Si new es NULL, la función no realiza ninguna operación.
Si lst es NULL, la función convierte new en la cabeza de la lista.
En general, la función establece el campo next del nuevo nodo para que
apunte a la cabeza actual de la lista, y luego actualiza *lst para que
apunte al nuevo nodo, convirtiéndolo en la nueva cabeza de la lista. */