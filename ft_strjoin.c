/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:34 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/25 15:50:22 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t l1;
	size_t l2;
	char* result;

	l1 = ft_strlen((char*)s1);
	l2 = ft_strlen((char*)s2);
	result = (char*) malloc((l1 + l2 + 1) * sizeof(char));
	if (result == NULL) {
		return NULL;
	}
	ft_strlcpy(result, s1, l1 + 1);
	ft_strlcat(result, s2, l1 + l2 + 1);
	return(result);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // Test Case 1: Normal strings
    char *str1 = "Hello, ";
    char *str2 = "World!";
    char *joined_str = ft_strjoin(str1, str2);

    if (joined_str)
    {
        printf("Joined String (Test Case 1): %s\n", joined_str);
        free(joined_str); // Free allocated memory
    }
    else
    {
        printf("Failed to allocate memory for joined string (Test Case 1).\n");
    }

    // Test Case 2: Empty string and normal string
    str1 = "";
    str2 = "Empty test";
    joined_str = ft_strjoin(str1, str2);

    if (joined_str)
    {
        printf("Joined String (Test Case 2): %s\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Failed to allocate memory for joined string (Test Case 2).\n");
    }

    // Test Case 3: Two empty strings
    str1 = "";
    str2 = "";
    joined_str = ft_strjoin(str1, str2);

    if (joined_str)
    {
        printf("Joined String (Test Case 3): \"%s\"\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Failed to allocate memory for joined string (Test Case 3).\n");
    }

    return 0;
}