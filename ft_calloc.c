/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:46:01 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/29 10:34:07 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_calloc:
		Allocates memory for an array of 'count' elements, each of 'size' bytes,
		and initializes all bytes to zero.
	Parameters:
		count - The number of elements to allocate memory for.
		size  - The size in bytes of each element.
	Return:
		A pointer to the allocated memory, or NULL if the allocation fails.
		Each byte of the allocated memory is set to zero.
	Note:
		This function mimics the behavior of the standard calloc function.
		If either 'count' or 'size' is 0, the function still allocates memory,
		but the size of the allocation will be 0.	*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*dst;

	s = count * size;
	dst = malloc(s);
	if (dst == NULL)
		return (NULL);
	else
		ft_memset(dst, 0, s);
	return (dst);
}
