/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:56:49 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:07:21 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	size_t	len;

	len = 0;
	len = ft_strlen("123456789");
	printf ("len = %zu\n", len);
	return (0);
} */

/* ft_strlen calcula la longitud de la cadena s al recorrer cada carácter
de la cadena hasta que se encuentra con un carácter nulo (\0), que marca
el final de la cadena. La longitud se cuenta usando la variable i y se
devuelve una vez que se completa el recorrido. */
