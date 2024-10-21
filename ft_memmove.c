/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:59:16 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 11:59:20 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s1;

	unsigned char *s2;

	s1 = (unsigned char*)dest;
	s2 = (unsigned char*)src; 
	if(!dest && !src)
		return(dest);
	if(dest < src)
		return(ft_memcpy(dest, src, n));
	while(n != 0)
	{
		s2 = s1;
		s1++;
		s2++;
		n--;
	}
	return(dest);
}