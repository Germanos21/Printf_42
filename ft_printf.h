/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:18:47 by gchernys          #+#    #+#             */
/*   Updated: 2022/04/09 02:38:49 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int			ft_putcharc(int c);
int			ft_putstrs(char *str);
int			ft_printf(const char *str, ...);
int			ft_switcher(va_list args, const char let);
int			ft_printperc(void);
int			ft_hexax(unsigned long long int i, int len);
void		ft_putchar_fd(char c, int fd);
static int	ft_putpointer(unsigned long n);
int			print_hex(va_list args, char c);
int			print_pointer(va_list args);
void		ft_putstr_fd(char *s, int fd);
int			ft_printunsigned(va_list args);
int			ft_printint(va_list args);
static int	ft_unsignednbr(unsigned int i);
static int	ft_putnbr(int i);

#endif