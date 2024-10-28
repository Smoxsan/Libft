/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:31:27 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:01:48 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n != 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	const char *string1 = "Hello, World!";
	const char *string2 = "Hello, World!";
	const char *string3 = "Hello, World?";
	size_t n = 13; // Compare full length of the strings

	// Test with equal strings
	int result = ft_memcmp(string1, string2, n);
	printf("Comparison result between string1 and string2: %d\n", result);
		// Should print 0

	// Test with different strings
	result = ft_memcmp(string1, string3, n);
	printf("Comparison result between string1 and string3: %d\n", result);
		// Should print negative value

	// Test with different n
	result = ft_memcmp(string1, string3, 5);
	printf("Comparison result between string1 and string3 (first 5 chars):
		%d\n", result); // Should print 0

	return (0);
}