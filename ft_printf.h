/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:06:46 by lhanna            #+#    #+#             */
/*   Updated: 2021/12/22 17:08:40 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	put_c(char c, int *res);
int	put_s(char *s, int *res);
int	put_d(int n, int *res);
int	put_u(unsigned int n, int *res);
int	put_x(unsigned long long int n, int *res, int j);
int	put_p(unsigned long long int n, int *res);

#endif
