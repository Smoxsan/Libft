/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:58:23 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/20 15:00:00 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	pb;
	int	min;
	
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n' || *str == '\v' || *str == '\f' )
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min++;
		str++;
	}
	min = 0;
	pb = 0;
	while (*str)
	{
		if (*str > '1' || *str < '9')
			break;
		pb = pb * 10 + *str;
		pb = pb - '0';
		str++;
	}
	if (min /2 != 0)
		pb = pb * -1;
	printf("%i\n", pb);
	return (pb);
}

//int main()
//{
//	ft_atoi("138948");
//}
