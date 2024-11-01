/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:25 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/30 18:04:21 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		count;
	char	*ptr;
	char	*temp;

	count = 0;
	while (str[count])
		count++;
	ptr = (char *)malloc((count + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	temp = ptr;
	while (*str)
	{
		*temp = *str;
		temp++;
		str++;
	}
	*temp = '\0';
	return (ptr);
}
