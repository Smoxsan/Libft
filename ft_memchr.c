/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:35 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/13 20:18:47 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *memchr(const void *ptr, int value, size_t num)
{
	unsigned char *s1;

	*s1 = (unsigned char*)ptr;
	while(num != 0)
	{
		if(*s1 == value)
			return(*s1);
		s1++;
		num--;
	}
	return(0);
}

