/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:17:41 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:14:07 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstadd_back:
		Adds the node 'new' to the end of the linked list pointed to by 'lst'.
		If the list is empty (*lst is NULL),
		the new node becomes the first node.
	Parameters:
		lst - 	A double pointer to the first node of the linked list.
				If the list is empty, it is updated to point to the new node.
		new - 	The new node to be added to the end of the list.
				If 'new' is NULL,		no operation is performed.
	Return:
		This function does not return a value.
*/
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
