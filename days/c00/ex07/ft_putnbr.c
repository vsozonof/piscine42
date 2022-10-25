/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:25:02 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/19 16:31:33 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nbr)
{
	int		i;
	char	tab[11];

	i = 0;
	while (nbr > 0)
	{
		tab[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	while (i >= 0)
	{
		write(1, &tab[i], 1);
		i--;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 12);
		nbr = 0;
		return ;
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		ft_print(nbr);
	}
	else
		ft_print(nbr);
}
