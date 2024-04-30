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
