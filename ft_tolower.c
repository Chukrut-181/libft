/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:29:19 by igchurru          #+#    #+#             */
/*   Updated: 2025/02/19 15:01:26 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts a given character to lowercase if it is an uppercase letter
and returns it. If the character is already lowercase or not a letter,
it is returned unchanged. */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
