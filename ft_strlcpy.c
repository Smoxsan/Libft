/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:19 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 13:16:07 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*temp;

	temp = NULL;
	*temp = *dest;
	while (size != 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	return (*temp);
}
