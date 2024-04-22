/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:20:20 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:21:55 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* ft_memcmp compara dos bloques de memoria (s1 y s2)
durante un número específico de bytes (n). La comparación se hace */
