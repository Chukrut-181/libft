/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:27:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 13:04:59 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (0 <= fd)
		write (fd, s, ft_strlen(s));
}

/* ft_putstr_fd escribe la cadena de caracteres s al archivo o dispositivo
identificado por el descriptor de archivo fd. Verifica si el descriptor de
archivo es válido y, si lo es, utiliza write para escribir la cadena. */
