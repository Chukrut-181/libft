/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:56:49 by igchurru          #+#    #+#             */
/*   Updated: 2024/12/04 15:19:37 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strlen:
		Computes the length of the string 's' excluding the null terminator.
	Parameters:
		s - The null-terminated string whose length is to be computed.
	Return:
		The number of characters in the string.	*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	size_t	len;

	len = 0;
	len = ft_strlen("123456789");
	printf ("len = %zu\n", len);
	return (0);
} */
