/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:19:12 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/20 14:33:23 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int count;

	count = 0;
	str = (char*)malloc(ft_strlen(*s) + 1 * sizeof(char));
	while(*s)
	{
		*str = f(count ,*s);
		count++;
		s++;
		str++;
	}
	str++;
	str = '\0';
	return str;
}
