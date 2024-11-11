/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:06:54 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:08:09 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memchr:
		Searches for the first occurrence of the character 'c' in the first 
		'n' bytes of the memory area pointed to by 's'.
	Parameters:
		s - Pointer to the memory area to be searched.
		c - The character to search for, passed as an int but will be treated
		as an unsigned char.
		n - The number of bytes to search.
	Return:
		Returns a pointer to the first occurrence of 'c' in the memory area,
		or NULL if 'c' is not found in the first 'n' bytes.
	Note:
		The function treats 'c' as an unsigned char, so the value of 'c' is 
		converted to unsigned char before comparison.	*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	void	*result;

	result = ft_memchr("12345~ª/aSdF", '5', 3);
	if (result != NULL)
		printf ("Encontrado: %c\n", *(char *)result);
	else
		printf ("Carácter no encontrado\n");
	return (0);
} */
