/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:28:23 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/25 14:08:30 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freeall(char ***frags, unsigned int k)
{
	unsigned int	i;
	char			**tofree;

	tofree = *frags;
	i = 0;
	while (i < k && tofree[i])
	{
		free (tofree[i]);
		i++;
	}
	free (tofree);
	return (NULL);
}

static size_t	ft_wordlen(const char *word, char c)
{
	size_t	len;

	len = 0;
	while (word[len] && word[len] != c)
		len++;
	return (len);
}

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
		while (*s != c)
			s++;
		while (*s == c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**frag;
	unsigned int	index;
	unsigned int	k;

	frag = malloc((ft_count_frags(s, c) + 1) * sizeof(char *));
	if (!frag)
		return (NULL);
	index = 0;
	k = 0;
	while (s[index] == c)
		index++;
	while (s[index])
	{
		frag[k] = ft_substr(s, index, ft_wordlen(s + index, c));
		if (!frag[k])
			return (ft_freeall(&frag, k));
		k++;
		index = index + ft_wordlen(s + index, c);
		while (s[index] == c)
			index++;
	}
	frag[k] = NULL;
	return (frag);
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
} */
