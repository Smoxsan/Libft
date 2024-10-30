/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:19 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/30 18:04:31 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	strlen;
	size_t	i;
	char	*temp;

	i = 0;
	temp = NULL;
	temp = (char *)src;
	strlen = ft_strlen(temp);
	if (size == 0)
		return (strlen);
	while (i < size - 1 && temp[i])
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = '\0';
	return (strlen);
}

//#include </usr/include/stdio.h>
// int main(void)
//{
// Define source and destination buffers
//    const char src[] = "Hello, World!";
//    char dest[20];
//    char small_dest[5];

// Test with a large enough buffer
//    size_t len = ft_strlcpy(dest, src, sizeof(dest));
//    printf("Source: \"%s\"\n", src);
//    printf("Copied to dest: \"%s\"\n", dest);
//    printf("Length of src: %zu\n", len);

// Test with a smaller buffer
//    len = ft_strlcpy(small_dest, src, sizeof(small_dest));
//    printf("\nCopied to small_dest: \"%s\"\n", small_dest);
//    printf("Length of src: %zu\n", len);

//    return (0);
//}
