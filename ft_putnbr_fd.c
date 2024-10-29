/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:32:43 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/29 12:19:47 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

//#include <stdio.h>

//int	main(void)
//{
//	int	number;

//	printf("Please enter a number: ");
//	scanf("%d", &number);
//	ft_putnbr_fd(number, 1);
//	return (0);
//}
// char *nb;

// nb = NULL;
// }
// if (n >= 10) {
// 	ft_putnbr(n / 10);
// 	n = n % 10;
// }
// if (n < 10)
// nb = n + '0';

// count = 0;
// c2 = 0;
//
// c2 = count;
//
// if(n == 0)
// 	write(fd, 0, 1);
// while(count > 0)
// {
// 	str[count] = n%10 + '0';
// 	n = n - (n%10)/10;
// 	count--;
// }
