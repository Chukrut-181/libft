/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:07:02 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:02:21 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strlcat:
		Appends the string 'src' to the end of 'dest' while ensuring that
		'dest' does not exceed the given size 'dstsize'. The function
		guarantees that	the result is null-terminated and returns the total
		length of the string it tried to create (i.e., the initial length of
		'dest' plus the length of 'src').
		If 'dstsize' is less than or equal to the length of 'dest', the function
		returns 'dstsize' plus the length of 'src'.
	Parameters:
		dest - The destination string to which 'src' will be appended.
		src  - The source string that will be appended to 'dest'.
		dstsize - The size of the destination buffer 'dest'.
	Return:
		The total length of the string 'dest' tried to create (i.e., the 
		initial length of 'dest' plus the length of 'src').
		If 'dstsize' is too small to hold the full result, the returned value 
		will be the total length of the concatenated string.	*/
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (slen);
	if (dstsize <= dlen)
		return (slen + dstsize);
	else
		slen = slen + dlen;
	while (src[i] != '\0' && dlen < dstsize - 1 && dest != src)
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (slen);
}

/* int	main(void)
{
	char	*test_d;
	int		i;

	test_d = (char *)malloc(20 * 1);
	if (test_d == NULL)
	{
		write(1, "Memory allocation failed\n", 26);
		return (0);
	}
	i = 0;
	while (i < 5)
	{
		test_d[i] = (char)i + '0';
		i++;
	}
	printf ("String original: %s\n", test_d);
	printf ("Valor retornado: %zu\n", ft_strlcat(test_d, "ASDFGH", 7));
	printf ("String final: %s\n", test_d);
	free (test_d);
	return (0);
} */
