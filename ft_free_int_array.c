/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_int_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:04:00 by igchurru          #+#    #+#             */
/*   Updated: 2025/01/22 13:06:48 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Frees a dynamically allocated array of integers (int **array).
 * 
 * Each row of the 2D array is freed first, followed by freeing the array 
 * of row pointers itself. The number of rows must be provided explicitly 
 * as the function DOES NOT RELY ON NULL TERMINATION.
 * 
 * If the input array is NULL, the function does nothing.
 *
 * @param array A pointer to a dynamically allocated 2D array of integers.
 * @param rows  The number of rows in the 2D array.
 */
void	free_int_array(int **array, int rows)
{
	int i;

	if (!array)
		return ;
	i = 0;
	while (i < rows)
	{
		free(array[i]);
		i++;
	}
	free(array);
	array = NULL;
}
