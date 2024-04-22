/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:48:04 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:29:13 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*mark;

	ch = (char)c;
	mark = NULL;
	while (*s)
	{
		if (*s == ch)
		{
			mark = (char *)s;
			s++;
		}
		else
			s++;
	}
	if (ch == '\0')
		mark = ((char *)s);
	return (mark);
}

/* int	main(void)
{
	char 	*test_str;

	test_str = ft_strrchr("a1s2d3f4g5h6j7k8l9", 55);
	printf ("Encontrado en: %s\n", test_str);
	return (0);
} */

/* ft_strrchr busca la última aparición de un carácter (c) en una cadena (s)
y devuelve un puntero a la posición donde se encontró la última aparición del
carácter. Si el carácter no se encuentra, devuelve NULL. Si c es el carácter
nulo ('\0'), devuelve un puntero al final de s. */
