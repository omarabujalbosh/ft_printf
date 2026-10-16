/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <oabu-jal@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:44:15 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/16 17:23:14 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	put_char(char c);
int	put_hexa(unsigned int n, char *s);
int	put_pounter(void *s);
int	put_num(int n);
int	put_str(char *str);
int	put_unsigned_int(unsigned int n);
int	put_mod(void);

#endif 
