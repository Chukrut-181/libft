/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:06:24 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:51:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		lens1;
	int		lens2;

	if (s1 && s2)
	{
		lens1 = ft_strlen(s1);
		lens2 = ft_strlen(s2);
		s3 = (char *)malloc(1 * (lens1 + lens2 + 1));
		if (s3 == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			s3[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			s3[lens1] = s2[i];
			lens1++;
		}
		s3[lens1] = '\0';
		return (s3);
	}
	return (NULL);
}

/* int	main(void)
{
	char	*test_str;

	test_str = ft_strjoin("QWERTY", "ASDFGH");
	printf ("%s\n", test_str);
	free (test_str);
	return (0);
} */

/* ft_strjoin une las dos cadenas s1 y s2 en una nueva cadena, reservando
memoria para la cadena resultante. Copia s1 y s2 en s3, y agrega un
carácter nulo al final. Si alguna cadena de entrada es nula o si la
asignación de memoria falla, la función devuelve NULL. */