/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:32:59 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:59:26 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (0 <= fd)
	{
		write (fd, s, ft_strlen(s));
		write (fd, "\n", 1);
	}
}

/* int	main(void)
{
	ft_putendl_fd("123456789", 1);
	return (0);
} */

/* ft_putendl_fd escribe el carácter c a un archivo o dispositivo identificado
por el descriptor de archivo fd utilizando la llamada al sistema write() y luego
añade un salto de línea. Si fd es válido, el carácter se escribe correctamente;
de lo contrario la función no realiza ninguna acción. */