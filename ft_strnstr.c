/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:27:28 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:17:52 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	printf ("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumr", 30));
	return (0);
} */

/* ft_strnstr busca la subcadena (needle) dentro de la cadena (haystack)
hasta un máximo de len caracteres de haystack. Si needle se encuentra,
la función devuelve un puntero a la posición de haystack donde comienza la
coincidencia. Si no se encuentra, devuelve NULL. */