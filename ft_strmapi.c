/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:19:12 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/24 15:14:08 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int count;
	int i;
	char *temp;

	i = 0;
	count = 0;
	str = NULL;
	temp = NULL;
	str = (char*)malloc(ft_strlen((char*)s) + 1 * sizeof(char));
	if(str == NULL)
		return (0);
	temp = str;
	while(s[i] != '\0')
	{
		*str = f(count ,s[i]);
		count++;
		i++;
		str++;
	}
	*str = '\0';
	return temp;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char to_upper(unsigned int index, char c) {
//     return c >= 'a' && c <= 'z' ? c - 32 : c; // Convert to uppercase if it's a lowercase letter
// }

// int main() {
//     const char *input = "hello, world!";
//     char *output = ft_strmapi(input, to_upper);

//     if (output) {
//         printf("Original: %s\n", input);
//         printf("Mapped: %s\n", output);
//         free(output); // Free the allocated memory
//     } else {
//         fprintf(stderr, "Error processing the string.\n");
//     }
// }