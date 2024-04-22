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

/* ft_atoi convierte una cadena (de char) que representa un número entero
(opcionalmente con un signo + ó - y espacios iniciales) en su
valor entero (int) equivalente, manejando adecuadamente los signos y
espacios en blanco. */
