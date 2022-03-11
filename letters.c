/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:35:11 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/11/17 11:45:32 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ischar(t_va *arg_struct)
{
	ft_putchar_fd(va_arg(arg_struct->args, int), 1);
	arg_struct->counter++;
}

void	isstring(t_va *arg_struct)
{
	char	*string;
	int		len;

	string = va_arg(arg_struct->args, char *);
	if (string == NULL)
	{
		ft_putstr_fd("(null)", 1);
		arg_struct->counter += 6;
	}
	else
	{
		len = ft_strlen(string);
		ft_putstr_fd(string, 1);
		arg_struct->counter += len;
	}
}
