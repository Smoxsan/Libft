/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:58 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/30 17:41:17 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief
/// @param str 
/// @param c 
/// @return 
char	*ft_strrchr(const char *str, int c)
{
	char	*t;
	char	temp;

	temp = (char)c;
	t = NULL;
	while (*str)
	{
		if (*str == temp)
			t = (char *)str;
		str++;
	}
	if (temp == '\0')
		return ((char *)str);
	return (t);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char *str = "teste";
// 	int ch = 1024;

// 	char *result = ft_strrchr(str, ch);

// 	if (result)
// 	{
// 		printf("Last occurrence of '%c': %s\n", ch, result);
// 	}
// 	else
// 	{
// 		printf("Character not found.\n");
// 	}

// 	return (0);
// }