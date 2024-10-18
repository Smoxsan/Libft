/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:47:08 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/18 18:07:31 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
int	ft_atoi(char *str);
void	bzero(void *s, size_t n);
void* ft_calloc(size_t num_elements, size_t element_size);
int	ft_isalpha(int a);
int	ft_isalnum(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);
char *ft_itoa(int n);
void *memchr(const void *ptr, int value, size_t num);
int	ft_memcmp(const void *str1, const void *str2, int n);
int	ft_memset(char *b, int c, int count);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char	ft_strchr(const char *str, int search_str);
char* strdup(const char* str);
char *ft_strjoin(char const *s1, char const *s2);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
int	ft_strlcat(char *dest, const char *src, int size);
int	ft_strlcpy(char *dest, const char *src, int size);
int	ft_strlen(char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strcmp(const char *str, const char *comp);
char	ft_strnstr(const char *b,	const char *l, int len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int a);
int ft_toupper(int a);
#endif 