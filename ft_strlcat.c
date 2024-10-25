/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:24 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/25 11:04:33 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t srclen;
	size_t i;
	char *temp;

	temp = NULL;
	temp = (char *)src;
	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] && destlen < size)
		destlen++;
	srclen = ft_strlen(temp);
	if (size <= destlen)
		return size + srclen;
	while (temp[i] && (destlen + i) < (size - 1)) 
	{
		dest[destlen + i] = temp[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen+srclen);
}
#include <stdio.h>
int main(void)
{
    // Test case 1: Enough space in dest
    char dest1[30] = "Hello, ";
    const char *src1 = "World!";
    size_t size1 = sizeof(dest1);

    // Test with a large enough buffer
    size_t len1 = ft_strlcat(dest1, src1, size1);
    printf("After ft_strlcat (sufficient space):\n");
    printf("Dest: \"%s\"\n", dest1);
    printf("Total length attempted: %zu\n\n", len1);

    // Test case 2: Not enough space in dest
    char dest2[10] = "Hello, ";
    const char *src2 = "World!";
    size_t size2 = sizeof(dest2);

    // Test with a smaller buffer
    size_t len2 = ft_strlcat(dest2, src2, size2);
    printf("After ft_strlcat (insufficient space):\n");
    printf("Dest: \"%s\"\n", dest2);
    printf("Total length attempted: %zu\n\n", len2);

    // Test case 3: Empty dest
    char dest3[20] = "";
    const char *src3 = "Hello, World!";
    size_t size3 = sizeof(dest3);

    size_t len3 = ft_strlcat(dest3, src3, size3);
    printf("After ft_strlcat (empty dest):\n");
    printf("Dest: \"%s\"\n", dest3);
    printf("Total length attempted: %zu\n", len3);

    return 0;
}