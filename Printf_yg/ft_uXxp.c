/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:37:21 by ygiirre           #+#    #+#             */
/*   Updated: 2022/01/31 16:52:09 by ygiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_u(unsigned int u, int *len)
{
	char	str[25];
	int		i;
	char	*base_char;

	base_char = "0123456789";
	i = 0;
	if (u == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (u != 0)
	{
		str[i] = base_char[u % 10];
		u /= 10;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}
