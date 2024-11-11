/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:25:21 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:53:52 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memset:
		Fills the first 'len' bytes of the memory area pointed to by 'b' with 
		the constant byte 'c'.
	Parameters:
		b   - Pointer to the memory area to be filled.
		c   - The byte value to be set in each byte of the memory area.
		len - The number of bytes to fill.
	Return:
		A pointer to the memory area 'b' after it has been filled.
	Note:
		This function is used to initialize memory blocks to a specific value,
		such as zeroing out memory or setting all bytes to a specific
		character.	*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (0 < len)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
