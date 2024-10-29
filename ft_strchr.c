/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:29 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/29 17:32:31 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	unsigned char	r;

	r = (unsigned char)search_str;
	while (*str)
	{
		if (*str == r)
			return ((char *)str);
		str++;
	}
	if (r == '\0')
		return ((char *)str);
	return (NULL);
}
//#include <stdio.h>
// int main(void)
//{
//    const char *string = "Hello, World!";
//    int search_char = 'o'; // Character to search for
//    char *result;

// Call ft_strchr to find the character
//    result = ft_strchr(string, search_char);

//    if (result != NULL)
//    {
//        printf("Found '%c' at position: %ld\n", search_char, result - string);
//    }
//    else
//    {
//        printf("Character '%c' not found.\n", search_char);
//    }

// Test searching for the null terminator
//    search_char = '\0'; // Searching for the null terminator
//    result = ft_strchr(string, search_char);
//    if (result != NULL)
//    {
//        printf("Found null terminator at position: %ld\n", result - string);
//    }

//    return (0);
//}