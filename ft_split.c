/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:16 by fkonig            #+#    #+#             */
/*   Updated: 2024/12/19 13:27:21 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*static_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			break ;
		}
		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}

static int	count_substrings(char const *s, char c)
{
	int	count;
	int	sub;

	count = 0;
	sub = 0;
	while (*s != '\0')
	{
		if (*s != c && !sub)
		{
			sub = 1;
			count++;
		}
		else if (*s == c)
			sub = 0;
		s++;
	}
	return (count);
}

static char	*copy_substring(const char *start, size_t len)
{
	char	*substring;


	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (free(substring), NULL);
	static_strncpy(substring, start, len);
	substring[len] = '\0';
	return (substring);
}

static char	**split_substrings(char const *s, char c, int count)
{
	int			index;
	char		**result;
	const char	*start;

	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (free(result), NULL);
	start = s;
	index = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (start != s)
				result[index++] = copy_substring(start, s - start);
			start = s + 1;
		}
		s++;
	}
	if (start != s)
		result[index++] = copy_substring(start, s - start);
	result[index] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int	count;

	if (!s)
		return (NULL);
	count = count_substrings(s, c);
	return (split_substrings(s, c, count));
}
