/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:01:53 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:04:16 by igchurru         ###   ########.fr       */
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

/* int	main(void)
{
	char	*d;
	int		i;

	d = (char *)malloc(20 * 1);
	if (d == NULL)
	{
		write(1, "Memory allocation failed\n", 26);
		return (0);
	}
	i = 0;
	while (i < 19)
	{
		d[i] = 'A';
		i++;
	}
	printf ("String original: %s\n", d);
	printf ("Valor retornado: %zu\n", ft_strlcpy(d, "123456789", 3));
	printf ("String final: %s\n", d);
	free (d);
	return (0);
} */

/* ft_strlcpy copia src a dst hasta dstsize - 1 caracteres o hasta el final
de src, lo que ocurra primero. La cadena destino se termina con un carácter
nulo (\0). La función devuelve la longitud de la cadena fuente (slen) como
un indicador de cuánto se habría copiado si no hubiera restricciones
de tamaño. */