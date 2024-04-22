/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:49:23 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:40:27 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str == NULL)
			return (NULL);
		else
			ft_strlcpy(str, &s1[start], (end - start + 1));
	}
	return (str);
}

/* int	main(void)
{
	char	*test_str;

	test_str = ft_strtrim("ABC1QWERTYUIOP31AB41CBA", "ABC14");
	printf ("String trimada: %s\n", test_str);
	return (0);
} */

/* ft_strtrim elimina los caracteres especificados en set de los extremos de s1
y devuelve una nueva cadena con el resultado. */
