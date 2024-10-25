/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:35 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/25 12:31:17 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char *s1;

	s1 = NULL;
	s1 = (unsigned char*)ptr;
	while(num != 0)
	{
		if(*s1 == (unsigned char)value)
			return((void *)s1);
		s1++;
		num--;
	}
	return(NULL);
}
#include <stdio.h>
int main(void)
{
    char data[] = "Hello, World!";
    int search_char = 'o';
    size_t num = 10;

    // Search for the character 'o' within the first `num` bytes
    char *result = ft_memchr(data, search_char, num);

    if (result != NULL)
    {
        printf("Found '%c' at position: %ld\n", search_char, result - data);
    }
    else
    {
        printf("Character '%c' not found within the first %zu bytes.\n", search_char, num);
    }

    return 0;
}