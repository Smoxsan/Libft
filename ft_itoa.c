/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:45 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/29 15:44:24 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
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
	{
		result[0] = '-';
		n = -n;
	}
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
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	fill_number(result, n, len);
	return (result);
}
