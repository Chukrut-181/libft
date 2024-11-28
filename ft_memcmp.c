/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:20:20 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:00:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memcmp:
		Compares the first 'n' bytes of memory areas 's1' and 's2'.
		It compares the bytes of the two memory areas byte-by-byte and returns
		a result based on the first difference found,
		or 0 if the areas are equal.
	Parameters:
		s1 - The first memory area to be compared.
		s2 - The second memory area to be compared.
		n - The number of bytes to compare.
	Return:
		Returns an integer less than, equal to, or greater than zero:
		- Negative if the first differing byte in 's1' is less than the
		corresponding byte in 's2'.
		- Positive if the first differing byte in 's1' is greater than the
		corresponding byte in 's2'.
		- Zero if the first 'n' bytes of 's1' and 's2' are equal.	*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while (0 < n)
	{
		if (*ucs1 != *ucs2)
			return (*ucs1 - *ucs2);
		ucs1++;
		ucs2++;
		n--;
	}
	return (0);
}

/* int	main(void)
{
	int	diferencia;

	diferencia = ft_memcmp("12345", "12345", 5);
	printf ("La diferencia es %d\n", diferencia);
	return (0);
} */
