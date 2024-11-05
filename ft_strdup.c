/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:41:03 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/05 13:07:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strdup:
		Allocates sufficient memory for a copy of the string 's1', 
		does the copy, and returns a pointer to it.
	Parameters:
		s1 - The string to be duplicated.
	Return:
		A pointer to the duplicated string, or NULL if the allocation fails.
		The duplicated string will include the null terminator.
	Note:
		The caller is responsible for freeing the memory allocated for 
		the duplicated string.	*/
char	*ft_strdup(const char *s1)
{
	char	*c;

	c = (char *)malloc((sizeof(char)) * ft_strlen(s1) + 1);
	if (c == NULL)
		return (NULL);
	else
		ft_strlcpy(c, s1, (ft_strlen(s1) + 1));
	return (c);
}
