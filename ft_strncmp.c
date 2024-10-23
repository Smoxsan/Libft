/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:53:29 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/23 16:52:40 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *comp, size_t n)
{
	while (n != 0 && *str != '\0' && *comp != '\0')
	{
		if (*str != *comp) 
            return (unsigned char)*str - (unsigned char)*comp;
		str++;
		comp++;
		n--;
	}
	if(n == 0)
	{
		return (0);
	}
	else
		return ((unsigned char)str - (unsigned char)comp);
}

// int main()
// {	
// 	printf("%i\n", res);
// 	int resx = strcmp(str, comp);
// 	printf("%i\n", resx);
// 	ft_strcmp("a=cde", "agcde");
// }