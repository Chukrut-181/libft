/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:06:48 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 11:39:37 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	if (ft_isalpha('W'))
		printf("El caracter SÍ es alfabético\n");
	else
		printf("El caracter NO es alfabético\n");
	return(0);
} */

/* ft_isalpha comprueba si un char es alfabético. */