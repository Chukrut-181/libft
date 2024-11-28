/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:09:00 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:22:15 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstclear:
		Deletes and frees all nodes in a linked list, starting from
		the first node pointed to by '*lst'. The function uses 'del' to free
		the content of each node and frees the node itself.
		The pointer to the list ('*lst') is set to NULL after all nodes
		are cleared.
	Parameters:
		lst - 	A double pointer to the first node of the linked list.
				After the function executes, '*lst' will be set to NULL.
		del - 	A function pointer to a function that takes a void pointer
				as its parameter and is used to free the content of each node.
	Return:
		This function does not return a value.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
	*lst = NULL;
}
