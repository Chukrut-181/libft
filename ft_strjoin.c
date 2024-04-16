/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:06:24 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/16 10:56:01 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		lens1;
	int		lens2;

	if (s1 && s2)
	{
		lens1 = ft_strlen(s1);
		lens2 = ft_strlen(s2);
		s3 = (char *)malloc(1 * (lens1 + lens2 + 1));
		if (s3 == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			s3[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			s3[lens1] = s2[i];
			lens1++;
		}
		s3[lens1] = '\0';
		return (s3);
	}
	return (NULL);
}
