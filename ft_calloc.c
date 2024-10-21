/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:00 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 13:24:17 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void* ft_calloc(size_t num_elements, size_t element_size)
{
	char* ptr;
	size_t size;
	size = num_elements * element_size;
	ptr = malloc(size);
	if (ptr == NULL)
		return(NULL);
	size_t i = 0;
	while (i < size) {
		((char*)ptr)[i] = 0;
		i++;
	}

	return ptr;
}
