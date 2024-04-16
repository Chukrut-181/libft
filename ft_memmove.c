/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:48:59 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/15 14:59:00 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ucd;
	char	*ucs;

	if (src == dst)
		return (dst);
	ucd = (char *)dst;
	ucs = (char *)src;
	if (ucs <= ucd)
	{
		while (0 < len)
		{
			len--;
			ucd[len] = ucs[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
