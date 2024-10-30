/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:45 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/30 16:18:22 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;
	
	count = 0;
	if (n <= 0)
		count = 1;
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
	result = (char *)ft_calloc(len + 1, 1);
	if (!result)
		return (NULL);
	fill_number(result, n, len);
	return (result);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int numbers[] = {0, -1, 42};
    char *result;

    for (int i = 0; i < 3; i++)
    {
        result = ft_itoa(numbers[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], result);
            free(result); // Don't forget to free the allocated memory
        }
        else
        {
            printf("Memory allocation failed for ft_itoa(%d)\n", numbers[i]);
        }
    }

    return 0;
}