/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:43:07 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/21 13:18:52 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memset(char *b, int c, int count)
{
	char	*temp;

	temp = NULL;
	*temp = *b;
	while (count != 0)
	{
		*b = c;
		b++;
		--count;
	}
	return (*temp);
}

int main()
{
	ft_memset("121212121", 8, 3);
}


	// while(*b)
	// {
	// 	b[0];
	// 	printf("%c", *b);
	// 	b++;
	// }