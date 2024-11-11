/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:45:15 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/24 10:58:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_substr:
		Allocates and returns a substring from the string 's', starting at
		index 'start' and of length 'len'. If the substring cannot be created
		(e.g., memory allocation fails), the function returns NULL. If 'start'
		is greater than the length of 's', an empty string is returned.
		If 'len' exceeds the length of the string starting at 'start',
		the substring will be truncated to fit.
	Parameters:
		s - The string from which the substring is extracted.
		start - The index where the substring starts in 's'.
		len - The maximum length of the substring.
	Return:
		A new string containing the substring,
		or NULL if memory allocation fails.	*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!len || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len +1);
	return (substr);
}

/* int	main(void)
{
	char	*test_str;
	test_str = ft_substr("Quousque tandem abutere, Catilina, ...?", 5, 15);
	printf ("%s\n", test_str);
	free (test_str);
	return (0);
} */
