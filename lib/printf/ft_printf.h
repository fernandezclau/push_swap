/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:22:30 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 16:40:39 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* STD LIB*/
# include <stdarg.h>
# include <unistd.h>

/*MAIN FUNCTION*/
int		ft_printf(char const *format, ...);
/*CHAR*/
void	ft_print_char(va_list arg, int *bytes);
void	ft_putchar(char c, int *bytes);
/*STRING*/
void	ft_print_str(va_list arg, int *bytes);
void	ft_putstr(char *str, int *bytes);
void	ft_putstr_reverse(char *str, int index);
/*VOID*/
void	ft_print_vd(va_list arg, int *bytes);
void	ft_putvd(void *vd, int *bytes);
/*DECIMAL*/
void	ft_print_decimal(va_list arg, int *bytes);
void	ft_putnbr(int nb, int *bytes);
/*UNSIGNED DECIMAL*/
void	ft_print_udecimal(va_list arg, int *bytes);
void	ft_putu_nbr(unsigned int u_nb, int *bytes);
/*HEXADECIMAL LOWERCASE/UPPERCASE*/
void	ft_print_hexa(va_list arg, int is_low, int *bytes);
void	ft_puthexa(unsigned long decimal, int is_low, int *bytes);
/*PERCENTAGE*/
void	ft_print_percentage(int *bytes);
#endif
