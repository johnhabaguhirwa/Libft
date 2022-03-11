/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:33:53 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/11/18 13:06:44 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numberlength(unsigned int number)
{
	int	length;

	length = 1;
	while (number > 9)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

static char	*p_atoi(unsigned int number)
{
	char	*string;
	int		length;

	length = numberlength(number);
	string = (char *)malloc(length + 1 * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[length] = '\0';
	while (length > 0)
	{
		string[--length] = number % 10 + '0';
		number = number / 10;
	}
	return (string);
}

void	isint(t_va *arg_struct)
{
	int		int_format;
	char	*num_string;

	num_string = NULL;
	int_format = va_arg(arg_struct->args, int);
	num_string = ft_itoa(int_format);
	arg_struct->counter += write(1, num_string, ft_strlen(num_string));
	free(num_string);
}

void	isunint(t_va *arg_struct)
{
	char			*str;
	unsigned int	num;

	num = va_arg(arg_struct->args, unsigned int);
	str = p_atoi(num);
	ft_putstr_fd(str, 1);
	arg_struct->counter += ft_strlen(str);
	free(str);
}
