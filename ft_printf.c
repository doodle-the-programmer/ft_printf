/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:59:18 by gpatrici          #+#    #+#             */
/*   Updated: 2025/11/04 19:31:29 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int	putstr(char *str)
{
	int	i;

	if (!str)
		return (putstr("(null)"));
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

static int	scan_c(char **fmt_i, va_list *ap)
{
	if (**fmt_i == '%' && *(*fmt_i + 1) == 's')
	{
		*fmt_i += 2;
		return (putstr(va_arg(*ap, char *)));
	}
	else
	{
		write(1, *fmt_i, 1);
		*fmt_i += 1;
		return (1);
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		printed;

	va_start(ap, fmt);
	printed = 0;
	while (*fmt)
		printed += scan_c((char **)&fmt, &ap);
	va_end(ap);
	return (printed);
}
