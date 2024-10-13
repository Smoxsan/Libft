/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:58:23 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/12 13:56:23 by fkonig           ###   ########.fr       */
=======
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:58:23 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/10 13:38:13 by smox             ###   ########.fr       */
>>>>>>> 2bdc42f5ae668f275be76308b553dbf69a964672
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	pb;
<<<<<<< HEAD
	int	min;
	
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n' || *str == '\v' || *str == '\f' )
		str++;
	while (*str == "-" || *str == "+")
	{
		if (*str == "-")
=======
	int	Min;
	
	while (*str = ' ' || *str = '\t'|| *str = '\r'|| *str = '\n'|| *str = '\v'|| *str = '\f')
		str++;
	while(*str == "-" || *str == "+")
	{
		If(*str == "-")
>>>>>>> 2bdc42f5ae668f275be76308b553dbf69a964672
			min++;
		str++;
	}
	min = 0;
	pb = 0;
	while (*str)
	{
<<<<<<< HEAD
		if (*str > "1" || *str < "9")
=======
		If(*str > "1" || *str < "9")
>>>>>>> 2bdc42f5ae668f275be76308b553dbf69a964672
			break;
		pb = pb * 10 + *str;
		pb = pb - '0';
		str++;
	}
	if (min /2 != 0)
<<<<<<< HEAD
		pb = pb * -1;
=======
		pb = pb* -1;
>>>>>>> 2bdc42f5ae668f275be76308b553dbf69a964672
	printf("%i\n", pb);
	return (pb);
}

int main()
{
	ft_atoi("138948");
}
