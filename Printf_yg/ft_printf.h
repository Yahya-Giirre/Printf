/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:49:06 by ygiirre           #+#    #+#             */
/*   Updated: 2021/12/08 16:38:05 by ygiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
void	ft_str(char *str, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putchar_len(char c, int *len);
void	ft_p(size_t p, int *len);
void	ft_hex(unsigned int x, int *len, char hex);
void	ft_u(unsigned int u, int *len);

#endif
