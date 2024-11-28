/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:48:59 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:02:13 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memmove:
		Copies 'len' bytes from the memory area 'src' to the memory area 'dst'.
		Unlike `ft_memcpy`, `ft_memmove` safely handles overlapping.
		If the memory areas overlap, the function ensures that data from 'src' 
		is copied to 'dst' without corrupting any data.
	Parameters:
		dst - Pointer to the destination memory area where bytes will be copied.
		src - Pointer to the source memory area from which bytes will be copied.
		len - Number of bytes to copy from 'src' to 'dst'.
	Return:
		Returns a pointer to the destination memory area 'dst'.
		If 'src' and 'dst' are the same, it returns 'dst'.	*/
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

/* int	main(void)
{
	char	*test_dst;

	test_dst = malloc(20 * sizeof(char));
	ft_memset(test_dst, "QWERTYUIOP", 6);
	printf ("string copiado: %s\n", (char *)test_dst);
	free (test_dst);
	return (0);
} */
