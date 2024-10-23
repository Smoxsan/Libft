/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:54 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/23 15:54:28 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *b,	const char *l, size_t len)
{
	char *temp;

	temp = NULL;
	while (*b)
	{
		if (*b == *l)
		{
			*temp = *b;
			while (*b == *l)
			{
				if (l == 0)
					return (temp);
				len--;
			}
		}
		b++;
	}
	return (0);
}
