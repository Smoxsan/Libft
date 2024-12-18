/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkonig <fkonig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:30:06 by fkonig            #+#    #+#             */
/*   Updated: 2024/11/26 08:18:30 by fkonig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handel_specifier(char speci, va_list args, int *count)
{
	if (speci == 'c')
		ft_printf_c((char)va_arg(args, int), count);
	else if (speci == 's')
		ft_printf_s(va_arg(args, char *), count);
	else if (speci == 'p')
		ft_printf_p(va_arg(args, void *), count);
	else if (speci == 'd' || speci == 'i')
		ft_printf_d(va_arg(args, int), count);
	else if (speci == '%')
		ft_printf_per(count);
	else if (speci == 'u')
		ft_printf_u(va_arg(args, unsigned int), count);
	else if (speci == 'x')
		ft_printf_hexlower(va_arg(args, unsigned int), count);
	else if (speci == 'X')
		ft_printf_hexupper(va_arg(args, unsigned int), count);
	return (*count);
}

int	ft_printf(const char *a, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, a);
	while (*a && count != -1)
	{
		if (*a == '%')
		{
			a++;
			if (*a != 'c' && *a != 's' && *a != 'p' && *a != 'd' && *a != 'i'
				&& *a != '%' && *a != 'u' && *a != 'x' && *a != 'X')
				return (-1);
			handel_specifier(*a, args, &count);
		}
		else
			ft_printf_c(*a, &count);
		a++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>

// int main(void) {
//     // Testing ft_printf with various format specifiers

//     // Simple string test
//     ft_printf("Hello, World!\n");

//     // Character test
//     ft_printf("Character test: %c\n", 'A');

//     // String test
//     ft_printf("String test: %s\n", "This is a string");

//     // Integer test
//     ft_printf("Integer test: %d\n", 42);

//     // Hexadecimal test
//     ft_printf("Hexadecimal test: %x\n", 255);

//     // Unsigned integer test
//     ft_printf("Unsigned integer test: %u\n", 3000000000U);

//     // Pointer address test
//     int num = 42;
//     ft_printf("Pointer test: %p\n", &num);

//     // Multiple arguments
//     ft_printf("Multiple arguments: %d, %s, %c,
//		0x%x\n", 123, "test", 'Z', 0xABCD);

//     // Test with formatted numbers
//     ft_printf("Zero-padded number: %05d\n", 7);
//     ft_printf("Left-aligned number: %-5d\n", 7);

//     // Test with special characters
//     ft_printf("Newline character: Line 1\nLine 2\n");
//     ft_printf("Tab character: \tTabbed text\n");

//     // Edge case tests
//     ft_printf("Percentage sign: %%\n");

//     return 0;
// }
