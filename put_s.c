/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:07:38 by lhanna            #+#    #+#             */
/*   Updated: 2021/12/22 17:07:42 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_s(char *s, int *res)
{
	int	i;

	i = -1;
	if (!s)
		s = "(null)\0";
	while (s[++i])
		put_c(s[i], res);
	return (*res);
}
