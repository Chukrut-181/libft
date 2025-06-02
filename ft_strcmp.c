/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Chukrut <ichurrucafdt@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 00:27:53 by Chukrut           #+#    #+#             */
/*   Updated: 2025/06/03 00:27:53 by Chukrut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while ((*ucs1 != '\0' || *ucs2 != '\0'))
	{
		if (*ucs1 > *ucs2 || *ucs2 == '\0')
			return (1);
		if (*ucs1 < *ucs2 || *ucs1 == '\0')
			return (-1);
		ucs1++;
		ucs2++;
	}
	return (0);
}
