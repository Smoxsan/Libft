/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:24 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/13 17:55:39 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlcat(char *dest, const char *src, int size)
{
	char	*temp;

	*temp = *dest;
	while (*dest)
	{
		dest++;
	}
	while (size != 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	return (*temp);
}
