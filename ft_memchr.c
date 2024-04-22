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

/* ft_memchr busca un carácter en una secuencia de bytes
dentro de una región de memoria, y devuelve un puntero al primer caso encontrado
o NULL si no lo encuentra. */