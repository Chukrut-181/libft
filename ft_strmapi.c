/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:11:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:04:01 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strmapi:
		Creates a new string by applying the function 'f' to each character 
		of the string 's', and passing its index as the first argument to 'f'.
		The new string is returned. The original string 's' is not modified.
		If either 's' or 'f' is NULL, the function returns NULL.
	Parameters:
		s  - The string to which the function 'f' will be applied.
		f  - A function that takes an unsigned integer (the index) and a 
		character, and returns a new character.
	Return:
		A new string created by applying 'f' to each character of 's'.
		If 's' or 'f' is NULL, NULL is returned.	*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	fstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (fstr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
