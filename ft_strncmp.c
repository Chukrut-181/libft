/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:53:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 10:59:23 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strncmp:
		Compares up to 'n' characters of two null-terminated strings
		lexicographically.
	Parameters:
		s1 - The first string to compare.
		s2 - The second string to compare.
		n  - The maximum number of characters to compare.
	Return:
		0 if both strings are equal up to the first 'n' characters.
		A positive integer if the first character that does not match
		has a greater value in 's1' than in 's2'.
		A negative integer if the first character that does not match
		has a lesser value in 's1' than in 's2'.
	Notes:
		- Comparison is case-sensitive.
		- The comparison stops when 'n' characters have been checked
		or a null character is encountered in either string.
		- The function converts both 's1' and 's2' to unsigned char pointers 
		to ensure that characters are compared correctly as unsigned values.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while ((0 < n) && (*ucs1 != '\0' || *ucs2 != '\0'))
	{
		if (*ucs1 > *ucs2)
			return (1);
		if (*ucs1 < *ucs2)
			return (-1);
		ucs1++;
		ucs2++;
		n--;
	}
	return (0);
}

/* int	main(void)
{
	printf ("Diferencia: %d\n", ft_strncmp ("123456789", "123456789", 9));
	return (0);
} */
