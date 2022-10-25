/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:57:57 by vsozonof          #+#    #+#             */
/*   Updated: 2022/10/05 15:07:37 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	tab = malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s;
	int				i;

	i = -1;
	s = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (NULL);
	while (++i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
	}
	s[i].size = 0;
	s[i].str = NULL;
	s[i].copy = NULL;
	return (s);
}

/*int main(int argc, char **argv)
{
	t_stock_str *res = ft_strs_to_tab(argc, argv);
	int i = 0;

	while (res[i].str)
	{
		printf("%d %s %s %d\n", i, res[i].str, res[i].copy, res[i].size);
		i++;
	}
}*/


