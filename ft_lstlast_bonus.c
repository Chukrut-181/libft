/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:56:16 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:18:23 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstlast:
		Returns the last node of the linked list pointed to by 'lst'.
		If the list is empty (i.e., 'lst' is NULL), the function returns NULL.
	Parameters:
		lst - A pointer to the first node of the linked list.
	Return:
		A pointer to the last node of the linked list.
		NULL if the list is empty.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
