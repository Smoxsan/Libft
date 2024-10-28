/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:59:16 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:08:07 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		*s2 = *s1;
		s1++;
		s2++;
		n--;
	}
	return (dest);
}

//#include "libft.h"
//#include <stdio.h>
//#include <string.h>

//int	main(void)
//{
	// Test Case 1: `value` exists in the specified range
//	char arr1[] = "Hello, World!";
//	char target = 'W';
//	char *result = (char *)ft_memchr(arr1, target, strlen(arr1));
//	if (result)
//		printf("Test Case 1: Found '%c' in \"%s\" at position %ld\n", target,
//			arr1, result - arr1);
//	else
//		printf("Test Case 1: '%c' not found in \"%s\"\n", target, arr1);

	// Test Case 2: `value` does not exist in the specified range
//	target = 'z';
//	result = (char *)ft_memchr(arr1, target, strlen(arr1));
//	if (result)
//		printf("Test Case 2: Found '%c' in \"%s\" at position %ld\n", target,
//			arr1, result - arr1);
//	else
//		printf("Test Case 2: '%c' not found in \"%s\"\n", target, arr1);

	// Test Case 3: Search within a limited range
//	target = 'o';
//	result = (char *)ft_memchr(arr1, target, 5);
//	if (result)
//		printf("Test Case 3: Found '%c' in first 5 characters of \"%s\" at position
//			%ld\n", target, arr1, result - arr1);
//	else
//		printf("Test Case 3: '%c' not found in first 5 characters of \"%s\"\n",
//			target, arr1);

	// Test Case 4: `num` is zero
//	target = 'H';
//	result = (char *)ft_memchr(arr1, target, 0);
//	if (result)
//		printf("Test Case 4: Found '%c' with num=0 in \"%s\" at position %ld\n",
//			target, arr1, result - arr1);
//	else
//		printf("Test Case 4: '%c' not found with num=0 in \"%s\"\n", target,
//			arr1);

//	return (0);
//}