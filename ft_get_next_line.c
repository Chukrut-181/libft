/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:48 by igchurru          #+#    #+#             */
/*   Updated: 2025/02/07 12:24:57 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_gnl_strjoin(char *storage, char *buffer)
{
	char	*s3;
	size_t	i;
	size_t	j;

	if (!storage)
		storage = ft_calloc(1, sizeof(char));
	if (!storage)
		return (NULL);
	s3 = ft_calloc((ft_strlen(storage) + ft_strlen(buffer) + 1), sizeof(char));
	if (!s3)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\0')
	{
		s3[i] = storage[i];
		i++;
	}
	j = 0;
	while (buffer[j] && buffer[j] != '\0')
		s3[i++] = buffer[j++];
	s3[ft_strlen(storage) + ft_strlen(buffer)] = '\0';
	free (storage);
	return (s3);
}

static char	*ft_trim_storage(char *storage)
{
	char	*new_storage;
	size_t	i;
	size_t	j;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i])
	{
		free (storage);
		return (NULL);
	}
	new_storage = ft_calloc((ft_strlen(storage) - i + 1), sizeof(char));
	if (!new_storage)
		return (NULL);
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
		storage = ft_gnl_strjoin(storage, buffer);
	}
	if (bytes_read == -1)
		free(storage);
	if (!storage)
		return (NULL);
	to_print = ft_send_to_print(storage);
	storage = ft_trim_storage(storage);
	return (to_print);
}
