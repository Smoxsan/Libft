/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:34 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 13:32:00 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t l1;
	size_t l2;
	char* result;
	char* temp;

	temp = NULL;
	l1 = ft_strlen((char*)s1);
	l2 = ft_strlen((char*)s2);
	result = (char*) malloc((l1 + l2 + 1) * sizeof(char));
	if (result == NULL) {
		return NULL;
	}
	*result = *temp;
	ft_strlcpy(result, s1, l1);
	while(*result)
		result++;
	ft_strlcat(result, s2, l2);
	return(result);
}
