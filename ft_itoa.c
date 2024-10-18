/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:45 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/18 15:02:47 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
{
	int num;
	int count;
	char *result;

	num = n;
	count = 0;
	while(num >= 10)
	{
		num = num/10;
		count++;
	}
	    if (n < 0)
    {
        result[0] = '-';
        n = -n;
    }
    else if (n == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
	result = (char*)malloc((count + 1) * sizeof(char));
	result[count] = '\0';
	while(n >= 10)
	{
		result[count--] = n/10;
	}
	return result;
}