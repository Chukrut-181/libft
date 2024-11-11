/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:27:28 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:17:52 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strnstr:
		Locates the first occurrence of the substring 'needle' in the
		string 'haystack', within the first 'len' characters.
		If 'needle' is an empty string, the function returns the string
		'haystack'. If no occurrence of 'needle' is found, it returns NULL.
	Parameters:
		haystack  - The string to search within.
		needle    - The substring to search for.
		len       - The maximum number of characters to search in 'haystack'.
	Return:
		If 'needle' is found in 'haystack', the function returns a pointer
		to the first occurrence of 'needle' within 'haystack'.
		If 'needle' is not found or if 'needle' is longer than 'haystack'
		or 'len', it returns NULL.	*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	printf ("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumr", 30));
	return (0);
} */
