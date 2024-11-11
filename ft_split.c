/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:28:23 by igchurru          #+#    #+#             */
/*   Updated: 2024/05/16 10:22:53 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_freeall:
		Frees all previously allocated memory for an array of strings.
		The function will free each string in the array up to index 'k'
		and then free the array itself. It returns NULL to indicate that all
		memory has been freed.
	Parameters:
		frags - The array of strings to be freed.
		k - The number of strings that have been allocated
		and need to be freed.
	Return:
		NULL after freeing the memory.	*/
static char	**ft_freeall(char **frags, unsigned int k)
{
	unsigned int	i;

	i = 0;
	while (i < k && frags[i])
	{
		free (frags[i]);
		i++;
	}
	free (frags);
	return (NULL);
}

/*	ft_wordlen:
		Returns the length of the word in the string 'word' until it encounters
		the delimiter character 'c'. This is used to calculate the length of
		each word when splitting the string.
	Parameters:
		word - The string to measure.
		c    - The delimiter character.
	Return:
		The length of the word (number of chars until the delimiter 'c').	*/
static size_t	ft_wordlen(const char *word, char c)
{
	size_t	len;

	len = 0;
	while (word[len] && word[len] != c)
		len++;
	return (len);
}

/*	ft_count_frags:
		Counts how many fragments (words) are present in the string 's'
		when split by the delimiter character 'c'.
		It skips over delimiters and counts non-empty words.
	Parameters:
		s - The string to count the words in.
		c - The delimiter character.
	Return:
		The number of words (fragments) in the string 's'.	*/
static unsigned int	ft_count_frags(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s++;
		}
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

/*	ft_split:
		Splits the string 's' into an array of strings,
		using the delimiter 'c'. It allocates memory for each word and
		the array itself. If any allocation fails, it frees all previously
		allocated memory and returns NULL.
	Parameters:
		s - The string to be split.
		c - The delimiter character.
	Return:
		An array of strings (fragments), or NULL if there is an error
		or the input is NULL.	*/
char	**ft_split(char const *s, char c)
{
	char			**frags;
	unsigned int	index;
	unsigned int	k;

	if (!s)
		return (NULL);
	frags = malloc((ft_count_frags(s, c) + 1) * sizeof(char *));
	if (!frags)
		return (NULL);
	index = 0;
	k = 0;
	while (s[index] && s[index] == c)
		index++;
	while (s[index])
	{
		frags[k] = ft_substr(s, index, ft_wordlen(s + index, c));
		if (!frags[k])
			return (ft_freeall(frags, k));
		k++;
		index = index + ft_wordlen(s + index, c);
		while (s[index] && s[index] == c)
			index++;
	}
	frags[k] = NULL;
	return (frags);
}

/* int	main(int argc, char **argv)
{
	char	**test;
	
	(void)argc;
	test = ft_split((char const *)argv[1], *argv[2]);
	while (test != NULL && *test != NULL)
	{
		printf ("%s\n", *test);
		test++;
	}
	return (0);
}
*/