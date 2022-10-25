/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 06:35:42 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/20 07:26:11 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_comb2(void)
{
	int	nb_g;
	int	nb_d;

	nb_g = 0;
	nb_d = 0;
	while (nb_g <= 99)
	{
		nb_d = nb_g + 1;
		while (nb_d <= 99)
		{
			ft_putchar(nb_g / 10 + '0');
			ft_putchar(nb_g % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nb_d / 10 + '0');
			ft_putchar(nb_d % 10 + '0');
			if (nb_g != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb_d++;
		}
		nb_g++;
	}
}
