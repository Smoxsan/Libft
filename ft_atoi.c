/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:58:23 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/28 12:00:21 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	pb;
	int	min;

	min = 0;
	pb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min++;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		pb = pb * 10 + *str - '0';
		str++;
	}
	if (min == 1)
		pb = pb * -1;
	return (pb);
}

// int main()
//{
//	ft_atoi("138948");
//}
