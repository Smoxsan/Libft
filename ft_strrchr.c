/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:58 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/23 15:37:41 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, size_t c)
{
	int i;
	char *r;

	r = (char *)str;
	i = ft_strlen((char *)str);
	r = r + i;
	while (*r)
	{
		if (c == (size_t)r)
			return (r);
		i--;
		r--;
	}
	return (0);
}
// #include <stdio.h>
// int main() {
//     const char *str = "vobdvwyt2*#^($#TYFG#^&FDVYCGHG^&$TR^&Qfrveghvcahj";
//     char ch = 'o';
    
//     char *result = ft_strrchr(str, ch);
    
//     if (result) {
//         printf("Last occurrence of '%c': %s\n", ch, result);
//     } else {
//         printf("Character not found.\n");
//     }

//     return 0;
// }