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

/*	ft_strlcpy:
		Copies up to 'dstsize - 1' characters from the string 'src' to 'dst', 
		ensuring the result is null-terminated. It returns the total length of 
		the string 'src' (not the number of characters copied). If 'dstsize'
		is smaller than 1, the function does not copy anything and returns the 
		length of 'src'.
	Parameters:
		dst     - The destination string to which 'src' will be copied.
		src     - The source string that will be copied to 'dst'.
		dstsize - The size of the 'dst' buffer, including the space for the 
		null-terminator.
	Return:
		The total length of the source string 'src'.
		If 'dstsize' is smaller than 1, it returns the length of 'src'.	*/
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
