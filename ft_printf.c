/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:34:12 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/11/18 10:52:04 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static	t_va	*memalloc(void)
{
	t_va	*arg_struct;

	arg_struct = (t_va *)malloc(sizeof(t_va));
	if (arg_struct == NULL)
		return (NULL);
	arg_struct->counter = 0;
	return (arg_struct);
}

void	converter(t_va *arg_struct, const char c)
{
	if (c == 'd' || c == 'i')
		isint(arg_struct);
	else if (c == 'c')
		ischar(arg_struct);
	else if (c == 'p')
		ispointer(arg_struct);
	else if (c == 'u')
		isunint(arg_struct);
	else if (c == 's')
		isstring(arg_struct);
	else if (c == 'x' || c == 'X')
		ishex(arg_struct, c);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		arg_struct->counter++;
	}
}

int	ft_printf(const char *format, ...)
{
	int		printed_len;
	t_va	*arg_struct;
	int		i;

	i = 0;
	arg_struct = memalloc();
	va_start(arg_struct->args, format);
	while (format[i])
	{
		if (format[i] == '%')
			converter(arg_struct, format[++i]);
		else
		{
			ft_putchar_fd(format[i], 1);
			arg_struct->counter++;
		}	
		i++;
	}
	printed_len = arg_struct->counter;
	va_end(arg_struct->args);
	free(arg_struct);
	return (printed_len);
}
