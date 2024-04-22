/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:45:15 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:44:10 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
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