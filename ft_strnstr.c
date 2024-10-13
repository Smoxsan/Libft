/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:54 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/13 19:59:02 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	ft_strnstr(const char *b,	const char *l, int len)
{
	while (*b)
	{
		if (*b == *l)
		{
			while (*b == *l)
			{
				if (l == 0)
					return (1);
				len--;
			}
		}
		b++;
	}
	return (0);
}
