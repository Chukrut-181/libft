/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:49:23 by igchurru          #+#    #+#             */
/*   Updated: 2024/11/28 11:05:07 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strtrim:
		Removes all characters in the string 's1' that are present in the
		string 'set' from both the beginning and the end of 's1'.
		The function returns a new string with the trimmed result.
		If 's1' or 'set' is NULL, or memory allocation fails,
		the function returns NULL.
	Parameters:
		s1 - The string to be trimmed.
		set - Set of characters to remove from the beginning and end of 's1'.
	Return:
		A new string with the characters from 'set' removed from both ends
		of 's1', or NULL if an error occurs
		(e.g., NULL inputs or memory allocation failure).	*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str == NULL)
			return (NULL);
		else
			ft_strlcpy(str, &s1[start], (end - start + 1));
	}
	return (str);
}

/* int	main(void)
{
	char	*test_str;

	test_str = ft_strtrim("ABC1QWERTYUIOP31AB41CBA", "ABC14");
	printf ("String trimada: %s\n", test_str);
	return (0);
} */
