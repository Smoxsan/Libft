/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:31:27 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 12:09:25 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1;

	unsigned char *s2;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while(n != 0)
	{
		if(s1 != s2)
		{
			return(s1 - s2);
		}
		s1++;
		s2++;
		n--;
	}
	return(0);
}
