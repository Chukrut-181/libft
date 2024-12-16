/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:54:06 by igchurru          #+#    #+#             */
/*   Updated: 2024/12/16 17:01:29 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trim_storage(char *storage)
{
	char	*new_storage;
	size_t	i;
	size_t	j;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i] || storage[i] == EOF)
	{
		free (storage);
		return (NULL);
	}
	new_storage = ft_calloc((ft_strlen(storage) - i + 1), sizeof(char));
	if (!new_storage)
	{
		free(storage);
		return (NULL);
	}
	i = i + 1;
	j = 0;
	while (storage[i])
		new_storage[j++] = storage[i++];
	new_storage[j] = '\0';
	free (storage);
	return (new_storage);
}

static char	*ft_send_to_print(char *storage)
{
	char	*to_print;
	size_t	i;

	i = 0;
	if (!storage[i])
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	to_print = ft_calloc((i + 2), sizeof(char));
	if (!to_print)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
	{
		to_print[i] = storage[i];
		i++;
	}
	if (storage[i] == '\n')
	{
		to_print[i] = storage[i];
		i++;
	}
	to_print[i] = '\0';
	return (to_print);
}

char	*ft_get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	char		*to_print;
	int			bytes_read;
	static char	*storage;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	bytes_read = 1;
	while (0 < bytes_read && !ft_strchr(storage, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (NULL);
		buffer[bytes_read] = '\0';
		storage = ft_strjoin(storage, buffer);
	}
	if (bytes_read == -1)
		free(storage);
	if (!storage)
		return (NULL);
	to_print = ft_send_to_print(storage);
	storage = ft_trim_storage(storage);
	return (to_print);
}

/* int	main(int argc, char **argv)
{
	int		fd;
	char	*test_str;

	if (argc != 2)
	{
		write(1, "Wrong argument count: Must be exactly 2.\n", 41);
		return (1);
	}
	test_str = NULL;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (1, "Error: Could not open file\n", 27);
		return (1);
	}
	while ((test_str = get_next_line(fd)))
	{
		printf("Result: %s", test_str);
		free(test_str);
	}
	close (fd);
	return (0);
} */