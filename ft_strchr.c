/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:33:26 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/15 12:58:16 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
