/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:34:20 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/16 18:08:17 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*ft_word_dupe(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_wordlen(s, c);
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		num_words++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (num_words);
}

static char	**fill_words(char **array, char const *s, char c)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			array[index] = ft_word_dupe(s + i, c);
			index++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	array[index] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**array;

	num_words = count_words(s, c);
	array = malloc(sizeof(char *) * (num_words + 1));
	if (array == NULL)
		return (NULL);
	array = fill_words(array, s, c);
	return (array);
}

int	main(void)
{
	char const	*s;
	char		c;
	char		**array;
	int			i;

	s = "33   qwe  33 ¨^~~ ~~  33 123   34   536  78 ";
	c = '3';
	array = ft_split(s, c);
	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
}
