/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:45 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:01:11 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_MIN
# define INT_MIN (-2147483647 - 1)
#endif

#include "libft.h"
#include <stdlib.h> // for malloc

static int	count_digits(int n)
{
	int	count;

	count = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_number(char *result, int n, int len)
{
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	n = (n < 0) ? -n : n;
	while (--len >= 0 && result[len] != '-')
	{
		result[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = 0;
	result = NULL;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	fill_number(result, n, len);
	return (result);
}

#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_itoa(0): %s\n", ft_itoa(0));             // Should return "0"
	printf("ft_itoa(-123): %s\n", ft_itoa(-123));       // Should return "-123"
	printf("ft_itoa(456): %s\n", ft_itoa(456));         // Should return "456"
	printf("ft_itoa(INT_MIN): %s\n", ft_itoa(INT_MIN));
		// Should return "-2147483648"
	printf("ft_itoa(INT_MAX): %s\n", ft_itoa(INT_MAX));
		// Should return "2147483647"

	return (0);
}