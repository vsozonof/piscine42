/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:26:35 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/27 15:10:59 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	cpt_minus;
	int	res;
	int	sign;

	i = 0;
	cpt_minus = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			cpt_minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + ((str[i]) - '0');
		i++;
	}
	if (cpt_minus % 2 != 0)
		sign = -1;
	return (res * sign);
}
