/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:40:22 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 11:46:11 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	if (ft_isascii(155))
		printf ("El carácter SÍ es ascii\n");
	else
		printf ("El carácter NO es ascii\n");
	return (0);
} */

/* ft_isascii comprueba si un carácter es ascii. */