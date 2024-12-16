/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:06:24 by igchurru          #+#    #+#             */
/*   Updated: 2024/12/04 15:50:29 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strjoin:
		Allocates (with malloc) and returns a new string that is the result
		of joining 's1' and 's2'. The function creates a new string with enough
		space to hold both 's1' and 's2', including the null terminator.
		If either 's1' or 's2' is NULL, the function returns NULL.
	Parameters:
		s1 - The first string to concatenate.
		s2 - The second string to concatenate.
	Return:
		A new string containing the concatenation of 's1' and 's2', or NULL 
		if either 's1' or 's2' is NULL or if memory allocation fails.	*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		lens1;
	int		lens2;

	if (s1 || s2)
	{
		lens1 = ft_strlen(s1);
		lens2 = ft_strlen(s2);
		s3 = (char *)malloc(1 * (lens1 + lens2 + 1));
		if (s3 == NULL)
			return (NULL);
		i = -1;
		while (s1 && s1[++i])
			s3[i] = s1[i];
		i = -1;
		while (s2 && s2[++i])
		{
			s3[lens1] = s2[i];
			lens1++;
		}
		s3[lens1] = '\0';
		return (s3);
	}
	return (NULL);
}

/* int	main(void)
{
	char	*test_str;

	test_str = ft_strjoin("QWERTY", "ASDFGH");
	printf ("%s\n", test_str);
	free (test_str);
	return (0);
} */
