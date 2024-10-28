/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:00:14 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:05:06 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	size_t	max_len;
	char	*result;

	if (start >= (unsigned int)ft_strlen(str))
		return (NULL);
	max_len = ft_strlen(str) - start;
	if (len > max_len)
		len = max_len;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, str + start, len + 1);
	result[len] = '\0';
	return (result);
}
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// Test Case 1: Valid substring extraction
	char str1[] = "Hello, World!";
	char *substr1 = ft_substr(str1, 0, 5); // "Hello"
	if (substr1)
	{
		printf("Test Case 1: \"%s\" -> \"%s\"\n", str1, substr1);
		free(substr1);
	}
	else
	{
		printf("Test Case 1: Failed to allocate memory.\n");
	}

	// Test Case 2: Start position beyond the string length
	char *substr2 = ft_substr(str1, 20, 5); // NULL (out of bounds)
	if (substr2)
	{
		printf("Test Case 2: \"%s\" -> \"%s\"\n", str1, substr2);
		free(substr2);
	}
	else
	{
		printf("Test Case 2: NULL (start position out of bounds)\n");
	}

	// Test Case 3: Length exceeds available length
	char *substr3 = ft_substr(str1, 7, 20); // "World!"
	if (substr3)
	{
		printf("Test Case 3: \"%s\" -> \"%s\"\n", str1, substr3);
		free(substr3);
	}
	else
	{
		printf("Test Case 3: Failed to allocate memory.\n");
	}

	// Test Case 4: Start at the end of the string
	char *substr4 = ft_substr(str1, 13, 5);
		// NULL (start is at the null terminator)
	if (substr4)
	{
		printf("Test Case 4: \"%s\" -> \"%s\"\n", str1, substr4);
		free(substr4);
	}
	else
	{
		printf("Test Case 4: NULL (start position at the end of string)\n");
	}

	// Test Case 5: Start in the middle of the string
	char *substr5 = ft_substr(str1, 5, 5); // ", Wo"
	if (substr5)
	{
		printf("Test Case 5: \"%s\" -> \"%s\"\n", str1, substr5);
		free(substr5);
	}
	else
	{
		printf("Test Case 5: Failed to allocate memory.\n");
	}

	// Test Case 6: Edge case - start is zero and length is zero
	char *substr6 = ft_substr(str1, 0, 0); // ""
	if (substr6)
	{
		printf("Test Case 6: \"%s\" -> \"%s\"\n", str1, substr6);
		free(substr6);
	}
	else
	{
		printf("Test Case 6: Failed to allocate memory.\n");
	}

	return (0);
}