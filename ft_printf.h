/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:23 by pmendez-          #+#    #+#             */
/*   Updated: 2023/11/01 19:15:02 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h> 
# include <stdarg.h>

int	ft_printf(char const *input, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_print_integer(int n);
int	ft_printpointer(unsigned long long pointer);
int	ft_print_hexa(unsigned int number, char type);
int	ft_print_hexa_changed(unsigned long long number);
int	ft_typeof_data(char *input, va_list args);
int	ft_print_unsigned_int(unsigned int number);

#endif
