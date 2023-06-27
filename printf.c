/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:08:52 by lhanna            #+#    #+#             */
/*   Updated: 2021/12/22 17:08:56 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dictionary(const char *s, va_list ap, int *res)
{
	if (*s == 'c')
		put_c(va_arg(ap, int), res);
	else if (*s == 's')
		put_s(va_arg(ap, char *), res);
	else if (*s == 'd' || *s == 'i')
		put_d(va_arg(ap, int), res);
	else if (*s == 'u')
		put_u(va_arg(ap, unsigned int), res);
	else if (*s == 'x')
		put_x((unsigned int)va_arg(ap, unsigned long long int), res, 1);
	else if (*s == 'X')
		put_x((unsigned int)va_arg(ap, unsigned long long int), res, 2);
	else if (*s == 'p')
		put_p(va_arg(ap, unsigned long long int), res);
	else if (*s == '%')
		put_c('%', res);
	return (*res);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
			res = dictionary(++s, ap, &res);
		else
			put_c(*s, &res);
		s++;
	}
	va_end(ap);
	return (res);
}
