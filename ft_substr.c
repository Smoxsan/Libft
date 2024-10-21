/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:00:14 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 13:05:35 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char *str, unsigned int start, size_t len)
{
	size_t max_len;
	char* result;

	if (start < 0 || start >= (unsigned int)ft_strlen(str))
		return (NULL);
	max_len = ft_strlen(str) - start;
	if (len > max_len)
		len = max_len;
	result = (char*)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return NULL;
	ft_strlcpy(result, str + start, len);
	result[len] = '\0';
	return result;
}
