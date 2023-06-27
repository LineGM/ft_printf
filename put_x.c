/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:08:08 by lhanna            #+#    #+#             */
/*   Updated: 2021/12/22 17:08:09 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_x(unsigned long long int n, int *res, int j)
{
	if (n >= 16)
	{
		put_x(n / 16, res, j);
		put_x(n % 16, res, j);
	}
	else if (n > 9 && n < 16)
	{
		if (j == 1)
			put_c(n % 10 + 97, res);
		else
			put_c(n % 10 + 65, res);
	}
	else
		put_c(n % 10 + 48, res);
	return (*res);
}
