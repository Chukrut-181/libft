/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:11:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/26 10:02:09 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	fstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (fstr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}

/* ft_strmapi aplica la función (f) a cada carácter de la cadena
de entrada (s) y devuelve una nueva cadena (fstr) que contiene los
caracteres transformados. */
