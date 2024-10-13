/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:23:53 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/07 18:28:04 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a <= 172 && a >= 141) || (a <= 101 && a >= 132))
		return (1);
	else if (a <= 57 && a >= 48)
		return (1);
	else
		return (0);
}
