/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:25:30 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 10:43:24 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_atoi:
		Converts the initial portion of the string 'str' to an integer
		representation.
	Parameters:
		str - The string to be converted to an integer.
	Return:
		The integer value represented by the initial portion of 'str'.
		If no valid conversion is found, returns 0.
	Notes:
		- The function skips any leading whitespace characters.
		- If a '+' or '-' sign is present, it is taken into account
		to determine the sign of the result.
		- Conversion stops once a non-numeric character is encountered.	*/
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = (sign * -1);
			str++;
		}
		else
			str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/* int	main(void)
{
	const char	*test_str;
	int	result;

	test_str = "	 	  -2147483648";
	result = ft_atoi(test_str);
	printf ("\n%d\n\n", result);
	return (0);
} */
