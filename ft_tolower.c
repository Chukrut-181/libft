/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:29:19 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:46:25 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}

/* ft_tolower toma un carácter (c) como entrada y lo convierte a minúscula si es
una letra mayúscula. Devuelve el carácter convertido, o el mismo carácter
si no es una letra mayúscula. */