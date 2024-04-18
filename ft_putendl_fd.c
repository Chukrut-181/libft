/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:32:59 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/17 12:44:48 by igchurru         ###   ########.fr       */
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
}
 */