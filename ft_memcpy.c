/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:29 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:52:43 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memcpy:
		Copies 'n' bytes from the memory area 'src' to the memory area 'dst'.
		The memory areas must not overlap, as the behavior is undefined
		for overlapping regions.
	Parameters:
		dst - Pointer to the destination memory area where bytes will be copied.
		src - Pointer to the source memory area from where bytes will be copied.
		n - Number of bytes to copy from 'src' to 'dst'.
	Return:
		Returns a pointer to the destination memory area 'dst'.
		If either 'dst' or 'src' is NULL, returns NULL.	*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	*test_dst;

	test_dst = malloc(20 * sizeof(char));
	ft_memcpy(test_dst, "QWERTYUIOP", 6);
	printf ("string copiado: %s\n", (char *)test_dst);
	free (test_dst);
	return (0);
} */
