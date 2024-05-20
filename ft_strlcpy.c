/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:01:53 by igchurru          #+#    #+#             */
/*   Updated: 2024/05/20 16:44:24 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	if (dstsize < 1)
		return (slen);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

/* ft_strlcpy copies from scr to dst up to (dstsize - 1) characters, or to the
end of src, whichever happens first. Dst is finished with a null char (\0).
ft_strlcpy returns the length of src (a.k.a. slen) as an indicator of what
would have been copied if there were no restrictions. */
