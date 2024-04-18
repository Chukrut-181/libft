/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:46:27 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/17 16:12:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*an;

	if (0 <= fd && n)
	{
		an = ft_itoa(n);
		write (fd, an, ft_strlen(an));
	}
}

int	main(void)
{
	ft_putnbr_fd(123, 1);
	return (0);
}
