/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:07:54 by lhanna            #+#    #+#             */
/*   Updated: 2021/12/22 17:07:58 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_u(unsigned int n, int *res)
{
	if (n > 9)
	{
		put_u(n / 10, res);
		put_u(n % 10, res);
	}
	else
		put_c(n + 48, res);
	return (*res);
}