/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:33:26 by igchurru          #+#    #+#             */
/*   Updated: 2024/12/04 15:29:53 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strchr:
		Locates the first occurrence of the character 'c' in the string 's'.
		Returns a pointer to the located character or NULL if the character 
		is not found.
	Parameters:
		s - The string to be searched.
		c - The character to locate in the string.
	Return:
		A pointer to the first occurrence of 'c' in 's', or NULL if 'c' 
		is not found.
		If 'c' is the null terminator, a pointer to the null terminator 
		in 's' will be returned.
	Note:
		The character 'c' is passed as an int, but is treated as
		an unsigned char. The search is case-sensitive.
*/
char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*mark;

	if (!s)
		return (NULL);
	ch = (char)c;
	mark = NULL;
	while (*s)
	{
		if (*s == ch)
		{
			mark = (char *)s;
			return (mark);
		}
		else
			s++;
	}
	if (ch == '\0')
	{
		mark = (char *)s;
		return (mark);
	}
	return (mark);
}
