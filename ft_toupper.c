/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:17:26 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:45:50 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}

/* ft_toupper toma un carácter (c) como entrada y lo convierte a mayúscula si es
una letra minúscula. Devuelve el carácter convertido, o el mismo carácter
si no es una letra minúscula. */
