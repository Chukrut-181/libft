/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:26:18 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/18 13:04:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc(size_t s)
{
	char	*mem;

	mem = (char *)malloc((s + 1) * sizeof(char));
	if (mem == NULL)
		return (NULL);
	else
		return (mem);
}

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

static char	*ft_specialcase(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (ft_strdup("0"));
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (n == -2147483648 || n == 0)
		return (ft_specialcase(n));
	len = ft_int_len(n);
	str = ft_malloc(len);
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

	result = ft_itoa(0);
	printf("%s\n", result);
	//free(result);
	return (0);
} */