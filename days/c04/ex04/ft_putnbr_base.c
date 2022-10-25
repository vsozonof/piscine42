/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:51:24 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/28 09:12:30 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_baselen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
	i++;
	}
	return (1);
}

void	ft_putnbr_base_print(long int nb, char *base, int baselen)
{
	char		tab[32];
	int			i;

	if (nb == 0)
	{
		ft_putchar(base[nb % baselen]);
		return ;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		tab[i] = base[nb % baselen];
		nb /= baselen;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (1, &tab[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	char		tab[32];
	int			i;
	long int	nb;

	nb = nbr;
	i = 0;
	len = ft_baselen(base);
	if (ft_checkbase(base) != 1)
		return ;
	else
		ft_putnbr_base_print(nb, base, len);
}
