/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:34:47 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/11/17 11:45:05 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*len_malloc(unsigned long format_num, int *len)
{
	char	*string;

	while (format_num >= 16)
	{
		format_num = format_num / 16;
		*len += 1;
	}
	string = (char *)malloc((*len + 1) + sizeof(char));
	if (string == NULL)
		return (NULL);
	string[*len] = '\0';
	return (string);
}

void	ishex(t_va *arg_struct, char c)
{
	unsigned int	format_num;
	char			*string;
	int				len;

	len = 1;
	format_num = va_arg(arg_struct->args, unsigned int);
	string = len_malloc(format_num, &len);
	len--;
	while (len >= 0)
	{
		if (format_num % 16 < 10)
			string[len] = '0' + (format_num % 16);
		else if (c == 'x')
			string[len] = 'a' - 10 + (format_num % 16);
		else if (c == 'X')
			string[len] = 'A' - 10 + (format_num % 16);
		len--;
		format_num /= 16;
		arg_struct->counter++;
	}
	ft_putstr_fd(string, 1);
	free(string);
}

void	ispointer(t_va *arg_struct)
{
	int				len;
	char			*str;
	unsigned long	n;

	n = va_arg(arg_struct->args, unsigned long);
	len = 1;
	str = len_malloc(n, &len);
	ft_putstr_fd("0x", 1);
	arg_struct->counter += 2;
	len--;
	while (len >= 0)
	{
		if (n % 16 < 10)
			str[len] = '0' + (n % 16);
		else
			str[len] = 'a' + (n % 16) - 10;
		n = n / 16;
		len--;
		arg_struct->counter++;
	}
	ft_putstr_fd(str, 1);
	free(str);
}
