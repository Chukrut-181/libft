/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:14:07 by igchurru          #+#    #+#             */
/*   Updated: 2025/04/01 12:14:16 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_arraylen - 	Calculates the number of elements in a
 * 					null-terminated array of strings.
 *
 * This function iterates through a null-terminated array of strings and
 * counts the number of elements. It safely handles a NULL pointer by
 * returning 0.
 *
 * **array: The input array of strings to evaluate.
 *
 * Return: The number of elements in the array. Returns 0 if the array is NULL.
 */
int	ft_arraylen(char **array)
{
	int	i;

	if (!array || !array[0])
		return (0);
	i = 0;
	while (array && array[i])
	{
		i++;
	}
	return (i);
}
