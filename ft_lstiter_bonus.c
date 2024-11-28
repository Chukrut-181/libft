/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:41:30 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:25:10 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstiter:
		Iterates through the linked list and applies the function 'f'
		to the content of each node.
	Parameters:
		lst - 	A pointer to the first node of the linked list.
		f - 	A function pointer to a function that takes a void pointer
				as its parameter and is applied to the content of each node.
	Return:
		This function does not return a value.
*/
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
