/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar </var/spool/mail/omar>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 23:31:25 by omar              #+#    #+#             */
/*   Updated: 2026/10/12 23:34:53 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	put_char(char c);
int	put_lower_hexa(unsigned int n, char *s);
int	put_pounter(void *s);
int	put_num(int n);
int	put_str(char *str);
int	 put_unsigned_int(unsigned int n);

#endif 
