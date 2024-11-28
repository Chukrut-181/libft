/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:09:11 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:16:25 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstadd_front:
		Adds the node 'new' to the beginning of the linked list pointed
		to by 'lst'. If the list is empty (i.e., *lst is NULL),
		the new node becomes the first node.
	Parameters:
		lst - 	A double pointer to the first node of the linked list.
				This pointer is updated to point to the new node as the head
				of the list.
		new - 	The new node to be added to the front of the list.
				If 'new' is NULL, no operation is performed.
	Return:
		This function does not return a value.
*/
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
