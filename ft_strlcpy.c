/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:19 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/20 15:05:50 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*temp;

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