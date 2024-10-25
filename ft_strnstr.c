/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:54 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/25 15:17:36 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *b,	const char *l, size_t len)
{
	char *base;
	char *isstr;
	size_t remain_len;
	
	if (!*l)
		return (char *)b;

	while (*base && len > 0)
	{
		base = (char *)b;
		isstr = (char *)l;
		remain_len = len;
		while (*isstr && len > 0 && *base == *isstr)
        {
            base++;
            isstr++;
            remain_len--;
        }
        if (!*isstr)
            return (char *)b;
        b++;
        len--;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
    const char *haystack = "Hello, World!";
    const char *needle1 = "World";
    const char *needle2 = "lo";
    const char *needle3 = "Hello";
    const char *needle4 = "NotFound";
    const char *needle5 = ""; // Empty needle
    size_t len = 13; // Length to search in haystack

    // Test with a valid needle
    char *result = ft_strnstr(haystack, needle1, len);
    if (result)
        printf("Found '%s' in haystack: \"%s\"\n", needle1, result);
    else
        printf("'%s' not found in haystack.\n", needle1);

    // Test with another valid needle
    result = ft_strnstr(haystack, needle2, len);
    if (result)
        printf("Found '%s' in haystack: \"%s\"\n", needle2, result);
    else
        printf("'%s' not found in haystack.\n", needle2);

    // Test with needle that matches the beginning of haystack
    result = ft_strnstr(haystack, needle3, len);
    if (result)
        printf("Found '%s' in haystack: \"%s\"\n", needle3, result);
    else
        printf("'%s' not found in haystack.\n", needle3);

    // Test with needle that does not exist in haystack
    result = ft_strnstr(haystack, needle4, len);
    if (result)
        printf("Found '%s' in haystack: \"%s\"\n", needle4, result);
    else
        printf("'%s' not found in haystack.\n", needle4);

    // Test with empty needle
    result = ft_strnstr(haystack, needle5, len);
    if (result)
        printf("Found empty needle in haystack: \"%s\"\n", result);
    else
        printf("Empty needle not found in haystack.\n");

    return 0;
}