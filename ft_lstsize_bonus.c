/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:58:16 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:23:55 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstsize:
		Counts the number of nodes in a linked list.
	Parameters:
		lst - A pointer to the first node of the linked list.
	Return:
		The number of nodes in the linked list.
*/
int	ft_lstsize(t_list *lst)
{
	int	list_size;

	list_size = 0;
	while (lst)
	{
		list_size++;
		lst = lst->next;
	}
	return (list_size);
}
