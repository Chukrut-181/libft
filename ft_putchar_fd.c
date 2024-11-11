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

/*	ft_putchar_fd:
		Writes the character 'c' to the given file descriptor 'fd'.
		If the file descriptor is valid, it writes the character to the output
		associated with that descriptor.
	Parameters:
		c  - The character to be written to the file descriptor.
		fd - The file descriptor where the character will be written.
	Return:
		This function does not return a value. If the file descriptor
		is invalid (negative), no action is taken.	*/
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
