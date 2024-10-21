/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:38 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 17:14:21 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	const char* start;
	const char* end;
	size_t new_len;
	char *trimmed;

	if (s1 == NULL) {
		return NULL;
	}
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_strlen((char*)s1);
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	new_len = end - start;
	trimmed = (char*)malloc(new_len + 1);
	if(!trimmed)
		return NULL;
	ft_strlcpy(trimmed, start, new_len);
	trimmed[new_len] = '\0';

	return trimmed;
}
