/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:43:56 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 11:52:08 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	if (ft_isprint('\0'))
		printf ("El carácter SÍ es imprimible\n");
	else
		printf ("El carácter NO es imprimible\n");
	return (0);
} */

/* ft_isprint evalúa si un carácter es imprimible. */
