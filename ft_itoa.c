/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:26:18 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/24 12:14:23 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_int_len:
		Calculates the length of the integer 'n' when represented as a string.
		Takes into account the sign of the integer (for negative numbers).
	Parameters:
		n - The integer whose length is to be determined.
	Return:
		Returns the number of digits required to represent 'n' as a string.
		Includes an extra digit for the negative sign if 'n' is negative.	*/
static size_t	ft_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

/*	ft_specialcase:
		Handles the special cases for integer to string conversion.
		Specifically, handles the edge case for the minimum integer value 
		(-2147483648) and zero (0).
	Parameters:
		n - The integer to check.
	Return:
		Returns a string representation of the special case
		(either "-2147483648" for the minimum integer or "0" for zero).	*/
static char	*ft_specialcase(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (ft_strdup("0"));
}

/*	ft_itoa:
		Converts an integer 'n' to its string representation. Handles negative
		numbers, and special cases for zero and the minimum integer.
	Parameters:
		n - The integer to be converted.
	Return:
		Returns a string representing the integer 'n'.
		If memory allocation fails, returns NULL.
	Note:
		This function handles the edge case of the minimum integer (-2147483648) 
		since it cannot be represented as a positive value due to the limits of 
		signed integers.	*/
char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (n == -2147483648 || n == 0)
		return (ft_specialcase(n));
	len = ft_int_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = len - 1;
	while (n)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}

/* int	main(void)
{
	char	*result;

	result = ft_itoa(123456789);
	printf("%s\n", result);
	free(result);
	return (0);
} */
