/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:29 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 17:29:00 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *str, int search_str)
{
	int counter;
	
	counter = ft_strlen((char *)str);
	while (counter != 0)
	{
		if (*str == search_str)
			return ((char *)str);
		if(*str == '\0')
			return(0);
		str++;
		counter--;
	}
	str++;
	return (0);
}
