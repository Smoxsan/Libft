/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:58 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/25 14:39:33 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *r;
	char *t;

	r = NULL;
	r = (char *)str;
	t = NULL;
	while (*r)
	{
		if (*r == (char)c)
			t = r;
		r++;
	}
	if (c == '\0')
        return (r); 
    return (t); 
}
 #include <stdio.h>
 int main() {
    const char *str = "v0oedvbz826o3eg71zdv1outg71ghvcahj";
    char ch = 'o';
    
     char *result = ft_strrchr(str, ch);
    
     if (result) {
        printf("Last occurrence of '%c': %s\n", ch, result);
    } else {
       printf("Character not found.\n");
     }

     return 0;
 }