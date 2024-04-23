/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:17:41 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:43:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* ft_lstadd_back agrega un nuevo nodo (new) al final de una lista enlazada.
Si la lista está vacía, el nuevo nodo se convierte en la cabeza de la lista.
Si la lista no está vacía, la función encuentra el último nodo y lo enlaza
con el nuevo nodo. */
