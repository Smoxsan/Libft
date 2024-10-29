/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:58 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/29 17:40:16 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*t;

	t = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			t = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (t);
}
//#include <stdio.h>

//int	main(void)
//{
//	const char *str = "v0oedvbz826o3eg71zdv1outg71ghvcahj";
//	char ch = 'o';

//	char *result = ft_strrchr(str, ch);

///	if (result)
//	{
//		printf("Last occurrence of '%c': %s\n", ch, result);
//	}
//	else
//	{
//		printf("Character not found.\n");
//	}

//	return (0);
//}