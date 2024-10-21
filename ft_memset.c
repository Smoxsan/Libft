/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:43:07 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 15:26:49 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *h;
	h = b;
	while (len != 0)
	{
		*h = (unsigned char)c;
		h++;
		--len;
	}
	return (b);
}

// int main()
// {
// 	ft_memset("121212121", 8, 3);
// }


	// while(*b)
	// {
	// 	b[0];
	// 	printf("%c", *b);
	// 	b++;
	// }