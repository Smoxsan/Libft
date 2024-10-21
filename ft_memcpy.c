/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:58:47 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 11:58:51 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *s1;

	unsigned char *s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	if(!dest && !src)
		return(dest);
	while(n != 0)
	{
		s2 = s1;
		s1++;
		s2++;
		n--;
	}
	return(dest);
}