/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:00:41 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 10:59:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_bzero:
		Sets the first 'n' bytes of the memory area pointed to by 's' to zero.
	Parameters:
		s - Pointer to the memory area to be zeroed.
		n - Number of bytes to set to zero.
	Note:
		This function is typically used to initialize or clear memory by
		setting all bytes to 0.	*/
void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (0 < n)
	{
		*p = 0;
		p++;
		n--;
	}
}

/* int	main(void)
{
	char	*test_str;

	test_str = (char *)malloc(26 * sizeof(char));
	ft_strlcpy(test_str, "Abracadabra pata de cabra!", 27);
	printf ("test_str inicial: %s\n", test_str);
	ft_bzero(test_str, 10);
	printf ("test_str final: %s\n", test_str);
	free(test_str);
	return (0);
} */
