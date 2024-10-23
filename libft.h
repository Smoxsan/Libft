/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:47:08 by fkonig            #+#    #+#             */
/*   Updated: 2024/10/23 15:48:51 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#define LIBFT_H
int	ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void* ft_calloc(size_t num_elements, size_t element_size);
int	ft_isalpha(int a);
int	ft_isalnum(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);
char *ft_itoa(int n);
void *ft_memchr(const void *ptr, int value, size_t num);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int search_str);
char* ft_strdup(const char* str);
char *ft_strjoin(char const *s1, char const *s2);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
int	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strlen(char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(const char *str, const char *comp, size_t n);
char	*ft_strnstr(const char *b,	const char *l, size_t len);
char	*ft_strrchr(const char *str, size_t c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char *str, unsigned int start, size_t len);
int	ft_tolower(int a);
int ft_toupper(int a);
#endif 