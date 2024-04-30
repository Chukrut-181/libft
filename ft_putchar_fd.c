/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:20:39 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/29 11:50:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (0 <= fd)
		write(fd, &c, 1);
}

/* #include <fcntl.h>
int	main(void)
{
	const char *file= "new_docu.txt";
	int fd = open(file,O_WRONLY);
	ft_putchar_fd('W', fd);
	return (0);
} */

/* ft_putchar_fd escribe el carácter c a un archivo o dispositivo identificado
por el descriptor de archivo fd utilizando la llamada al sistema write().
Si fd es válido, el carácter se escribe correctamente; de lo contrario
la función no realiza ninguna acción. */
