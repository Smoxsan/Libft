/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:19 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/13 17:55:59 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlcpy(char *dest, const char *src, int size)
{
	char	*temp;

	*temp = *dest;
	while (size != 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	return (*temp);
}