/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:00 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 04:39:00 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void* ft_calloc(size_t num_elements, size_t element_size)
{
	int ptr;
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
