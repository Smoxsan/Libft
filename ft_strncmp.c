/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:53:29 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/09 14:57:53 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(const char *str, const char *comp)
{
	unsigned char	n;
	int				res;

	while (*str && *str == *comp)
	{
		str++;
		comp++;
	}
	res = *str - *comp;
	return (0);
}

// int main()
// {	
// 	printf("%i\n", res);
// 	int resx = strcmp(str, comp);
// 	printf("%i\n", resx);
// 	ft_strcmp("a=cde", "agcde");
// }