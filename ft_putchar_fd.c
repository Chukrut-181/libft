/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:20:39 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:57:53 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (0 <= fd)
		write(fd, &c, 1);
}

/* int	main(void)
{
	ft_putchar_fd('W', 1);
	return (0);
} */

/* ft_putchar_fd escribe el carácter c a un archivo o dispositivo identificado
por el descriptor de archivo fd utilizando la llamada al sistema write().
Si fd es válido, el carácter se escribe correctamente; de lo contrario
la función no realiza ninguna acción. */
