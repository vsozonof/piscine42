/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:40:08 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/23 10:12:50 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*base;
	int				i;
	unsigned char	tmp;

	i = 0;
	base = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 0 && str[i] < ' ' || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar(base[(str[i] / 16)]);
			ft_putchar(base[(str[i] % 16)]);
			i++;
		}
		else
		{
			tmp = str[i];
			ft_putchar(tmp);
			i++;
		}
	}
}
