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

/*	ft_strrchr:
		Locates the last occurrence of the character 'c' in the string 's'.
		If 'c' is found in 's', the function returns a pointer to the
		last occurrence.
		If 'c' is not found, the function returns NULL.
		If 'c' is '\0', the function returns a pointer to the null terminator
		of the string.
	Parameters:
		s - The string to search within.
		c - The character to locate in the string.
	Return:
		A pointer to the last occurrence of 'c' in 's'.
		NULL if 'c' is not found.
		If 'c' is '\0', it returns a pointer to the null terminator of 's'.	*/
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
