/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:38 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/25 16:04:33 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	const char* start;
	const char* end;
	size_t new_len;
	char *trimmed;

	if (s1 == NULL) 
		return NULL;
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_strlen((char*)s1);
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	new_len = end - start;
	trimmed = (char*)malloc(new_len + 1);
	if(!trimmed)
		return NULL;
	ft_strlcpy(trimmed, start, new_len);
	trimmed[new_len] = '\0';

	return trimmed;
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
    // Test Case 1: Trim both leading and trailing characters
    char str1[] = "   Hello, World!   ";
    char set[] = " ";
    char *result = ft_strtrim(str1, set);

    if (result)
    {
        printf("Test Case 1: \"%s\" -> \"%s\"\n", str1, result);
        free(result);
    }
    else
    {
        printf("Test Case 1: Failed to allocate memory.\n");
    }

    // Test Case 2: Trim only leading characters
    char str2[] = "---Hello, World!";
    char set2[] = "-";
    result = ft_strtrim(str2, set2);

    if (result)
    {
        printf("Test Case 2: \"%s\" -> \"%s\"\n", str2, result);
        free(result);
    }
    else
    {
        printf("Test Case 2: Failed to allocate memory.\n");
    }

    // Test Case 3: Trim only trailing characters
    char str3[] = "Hello, World!***";
    char set3[] = "*";
    result = ft_strtrim(str3, set3);

    if (result)
    {
        printf("Test Case 3: \"%s\" -> \"%s\"\n", str3, result);
        free(result);
    }
    else
    {
        printf("Test Case 3: Failed to allocate memory.\n");
    }

    // Test Case 4: No characters to trim
    char str4[] = "Hello, World!";
    char set4[] = " ";
    result = ft_strtrim(str4, set4);

    if (result)
    {
        printf("Test Case 4: \"%s\" -> \"%s\"\n", str4, result);
        free(result);
    }
    else
    {
        printf("Test Case 4: Failed to allocate memory.\n");
    }

    // Test Case 5: Empty string
    char str5[] = "";
    char set5[] = " ";
    result = ft_strtrim(str5, set5);

    if (result)
    {
        printf("Test Case 5: \"%s\" -> \"%s\"\n", str5, result);
        free(result);
    }
    else
    {
        printf("Test Case 5: Failed to allocate memory.\n");
    }

    // Test Case 6: Empty set (nothing should be trimmed)
    char str6[] = "   Hello, World!   ";
    char set6[] = "";
    result = ft_strtrim(str6, set6);

    if (result)
    {
        printf("Test Case 6: \"%s\" -> \"%s\"\n", str6, result);
        free(result);
    }
    else
    {
        printf("Test Case 6: Failed to allocate memory.\n");
    }

    return 0;
}