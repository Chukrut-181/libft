/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:41:30 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 11:56:06 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* ft_lstiter permite iterar sobre una lista enlazada y aplicar una
función específica (f) a cada uno de los nodos de la lista.
Si la lista está vacía o no se proporciona una función para aplicar,
la función no realiza ninguna operación y simplemente retorna.
Si los argumentos son válidos, la función recorre la lista y aplica
f al contenido de cada nodo. */