/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:53:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/15 12:26:26 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
int	main(void)
{
	printf ("La diferencia es %d.\n", ft_strncmp ("123456789", "123456789", 9));
	return (0);
}
*/