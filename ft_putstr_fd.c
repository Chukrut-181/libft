/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:27:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/25 13:49:45 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putstr_fd:
		Writes the string 's' to the given file descriptor 'fd'. If the
		string 's' is NULL or if the file descriptor is invalid (negative),
		the function does nothing.
	Parameters:
		s  - The string to be written to the file descriptor.
		fd - The file descriptor where the string will be written.
	Return:
		This function does not return a value. If 's' is NULL or
		'fd' is invalid, it does nothing.	*/
void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}
