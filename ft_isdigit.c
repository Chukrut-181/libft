/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:21:23 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 11:49:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	if (ft_isdigit('A'))
		printf ("El carácter SÍ es un dígito\n");
	else
		printf ("El carácter NO es un dígito\n");
	return (0);
} */

/* ft_isdigit comprueba si un carácter es o no es un dígito. */