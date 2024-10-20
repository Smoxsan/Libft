/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:32:43 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/20 15:03:03 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    char *s;
    s = ft_itoa(n);
	while(*s)
	{
		write(fd, *s, 1);
		s++;
	}
}