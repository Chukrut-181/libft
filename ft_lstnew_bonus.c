/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:09:54 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:11:17 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstnew:
		Creates a new node for a singly linked list and initializes it with 
		the provided content.
		The `next` pointer of the new node is set to NULL.
	Parameters:
		content - A generic pointer to the data that will be
		stored in the new node.
	Return:
		A pointer to the newly created node if memory allocation succeeds.
		NULL if memory allocation fails.
*/
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
