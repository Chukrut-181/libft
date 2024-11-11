/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:32:59 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/25 13:47:06 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putendl_fd:
		Writes the string 's' followed by a newline to the given file descriptor 'fd'.
		If 's' is NULL or if the file descriptor is invalid (negative), no action is taken.
	Parameters:
		s  - The string to be written to the file descriptor.
		fd - The file descriptor where the string and newline will be written.
	Return:
		This function does not return a value. If 's' is NULL or 'fd' is invalid,
		it does nothing.	*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

/* int	main(void)
{
	ft_putendl_fd("123456789", 1);
	return (0);
} */
