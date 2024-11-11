/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:46:27 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 15:53:31 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putnbr_fd:
		Writes the integer 'n' to the given file descriptor 'fd'.
		If the integer is negative, a minus sign is written first,
		followed by the absolute value. If the integer is the minimum possible
		value (-2147483648), it is handled as a special case.
	Parameters:
		n  - The integer to be written to the file descriptor.
		fd - The file descriptor where the integer will be written.
	Return:
		This function does not return a value.	*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

/* int	main(void)
{
	ft_putnbr_fd(0, 1);
	return (0);
} */
