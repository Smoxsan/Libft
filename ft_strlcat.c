/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:24 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 12:57:50 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*temp;

	temp = NULL;
	*temp = *dest;
	while (*dest)
	{
		dest++;
	}
	while (size != 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	return (*temp);
}
