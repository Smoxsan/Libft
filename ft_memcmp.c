/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smox <smox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:31:27 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/20 14:56:17 by smox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	unsigned char *s1;

	unsigned char *s2;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while(n != 0)
	{
		if(s1 != s2)
		{
			return(s1 - s2);
		}
		s1++;
		s2++;
		n--;
	}
	return(0);
}