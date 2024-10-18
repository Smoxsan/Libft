/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:16 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/18 18:09:33 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int count_substrings(char const *s, char c)
{
    int count = 0;
    int sub = 0;

    while (*s != '\0')
    {
        if (*s != c && !sub) // c = are we in a substring, sub is it 0 so beginn of new substring or 1 in substring
        {
            sub = 1;
            count++;
        } else if (*s == c)
        {
            sub = 0;
        }
        s++;
    }
    return (count);
}

static char* copy_substring(const char* start, size_t len)
{
    char* substring;
    substring = (char*)malloc((len + 1) * sizeof(char));
    if (!substring)
    {
        return (NULL); 
    }
    ft_strncpy(substring, start, len);
    substring[len] = '\0'; 
    return (substring);
}


char **ft_split(char const *s, char c) {
    int substr_count;
    char** result;
    int index;
    const char* start;

    if (!s)
    {
        return NULL;  
    }
    substr_count = count_substrings(s, c);
    result = (char**)malloc((substr_count + 1) * sizeof(char*));
    if (!result)
    {
        return NULL; 
    }

    index = 0;
    start = s;
    while (*s != '\0')
    {
        if (*s == c)
        {
            if (start != s)
            {
                result[index++] = copy_substring(start, s - start);
            }
            start = s + 1;
        }
        s++;
    }
    if (start != s)
    {
        result[index++] = copy_substring(start, s - start);
    }
    result[index] = NULL;
    return result;
}
