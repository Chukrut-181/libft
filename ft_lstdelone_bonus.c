/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:51:33 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:19:49 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstdelone:
		Deletes a single node from a linked list by applying the provided 'del'
		function to its content and freeing the node's memory.
	Parameters:
		lst - 	A pointer to the node to be deleted.
				If 'lst' is NULL, the function does nothing.
		del - 	A function pointer to a function that takes a void pointer
				as its parameter and is used to free the content of the node.
	Return:
		This function does not return a value.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
