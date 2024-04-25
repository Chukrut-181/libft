/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:45:15 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/24 10:58:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!len || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len +1);
	return (substr);
}

/* int	main(void)
{
	char	*test_str;
	test_str = ft_substr("Quousque tandem abutere, Catilina, ...?", 5, 15);
	printf ("%s\n", test_str);
	free (test_str);
	return (0);
} */

/* ft_substr extrae una subcadena de s comenzando en start y con una
longitud de len, devolviendo la subcadena en una nueva cadena de caracteres. */