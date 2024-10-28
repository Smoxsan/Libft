/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:25 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:04:14 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		count;
	char	*ptr;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	ptr = (char *)malloc(count * sizeof(char));
	while (*str)
	{
		str = ptr;
		str++;
		ptr++;
	}
	return (ptr);
}
