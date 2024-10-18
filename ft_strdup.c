/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:25 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/18 15:03:27 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_atoi.c>

char* strdup(const char* str)
{
    int count;
    char* ptr;

    count = 0;
    while(*str)
    {
        str++;
        count++;
    }
    ptr = (char*) malloc(count * sizeof(char));
    while(*str){
        str = ptr;
        str++;
        ptr++;
    }
    return(ptr);
}