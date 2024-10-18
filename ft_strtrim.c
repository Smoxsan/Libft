/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:02:38 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/18 15:02:40 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
    const char* start;
    const char* end;
    size_t new_len;

    if (s1 == NULL) {
        return NULL;
    }
    start = s1;
    end = s1 + ft_strlen(s1) - 1;
    while ()
        end--;
    new_len = end - start + 1;

}