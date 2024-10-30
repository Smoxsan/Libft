/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:00:14 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/30 18:04:50 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	size_t	max_len;
	char	*result;

	if (start >= (unsigned int)ft_strlen(str))
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	max_len = ft_strlen(str) - start;
	if (len > max_len)
		len = max_len;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, str + start, len + 1);
	result[len] = '\0';
	return (result);
}
