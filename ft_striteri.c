/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:47:41 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/25 13:43:06 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_striteri:
		Iterates over the string 's', passing each character to the function
		'f'	along with its index. The function 'f' is applied to each character
		in the string, modifying it in place if necessary.
	Parameters:
		s - The string to iterate over.
		f - The function to apply to each character of the string, which takes 
		an index and a pointer to the character.
	Return:
		This function does not return a value.
		If either 's' or 'f' is NULL, the function returns without
		doing anything.	*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
