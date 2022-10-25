/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 07:08:13 by vsozonof          #+#    #+#             */
/*   Updated: 2022/10/03 17:31:41 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (min >= max)
	{
		(*range) = NULL;
		return (0);
	}
	else
		len = (max - min);
	(*range) = malloc(sizeof(int) * len);
	if (!(*range))
	{
		(*range) = NULL;
		return (-1);
	}
	while (i < len)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}

/*int main(void)
{
	int p1;
	int *p2;
	int	**p3;
	int len;
	int i = 0;

	p3 = &p2;
	
	len = ft_ultimate_range(p3, 50, 55);

	while (i < len)
	{
		printf("%i\n", p2[i]);
		i++;
	}
}*/