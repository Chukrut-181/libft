/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:07:02 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/15 11:08:10 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
int	main(void)
{
	char	*d;
	int		i;

	d = (char *)malloc(20 * 1);
	if (d == NULL)
	{
		write(1, "Memory allocation failed\n", 26);
		return (0);
	}
	i = 0;
	while (i < 5)
	{
		d[i] = '0';
		i++;
	}
	printf ("String original: %s\n", d);
	printf ("Valor retornado: %zu\n", ft_strlcat(d, "12345", 10));
	printf ("String final: %s\n", d);
	free (d);
	return (0);
}
*/