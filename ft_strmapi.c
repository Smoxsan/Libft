/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:19:12 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 13:33:58 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int count;

	count = 0;
	str = (char*)malloc(ft_strlen((char*)s) + 1 * sizeof(char));
	while(*s)
	{
		*str = f(count ,*s);
		count++;
		s++;
		str++;
	}
	str++;
	*str = '\0';
	return str;
}
