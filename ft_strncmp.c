/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:53:29 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:04:47 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *comp, size_t n)
{
	while (n != 0 && *str != '\0' && *comp != '\0')
	{
		if (*str != *comp)
			return ((unsigned char)*str - (unsigned char)*comp);
		str++;
		comp++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*str - (unsigned char)*comp);
}
#include <stdio.h>

int	main(void)
{
	printf("Test Case 1: %d\n", ft_strncmp("abc", "abc", 3)); 
		// Should return 0
	printf("Test Case 2: %d\n", ft_strncmp("abc", "abcd", 3));
		// Should return 0
	printf("Test Case 3: %d\n", ft_strncmp("abc", "abz", 3)); 
		// Should return a negative value
	printf("Test Case 4: %d\n", ft_strncmp("abc", "ab", 3));  
		// Should return a positive value
	printf("Test Case 5: %d\n", ft_strncmp("abc", "abcd", 5));
		// Should return a negative value (out of bounds)

	return (0);
}