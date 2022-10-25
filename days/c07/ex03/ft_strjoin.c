/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 05:11:39 by vsozonof          #+#    #+#             */
/*   Updated: 2022/10/04 10:43:25 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	ft_ultimate_len_calculator(char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (strs[i])
	{
		total_len += ft_strlen(strs[i]);
		if (sep != NULL)
			total_len += ft_strlen(sep);
		i++;
	}
	if (sep != NULL)
		total_len -= (ft_strlen(sep));
	return (total_len + 1);
}

int	ft_sep_copier(char **strs, char *sep, int c, char *tab)
{
	int	k;

	k = 0;
	if (!sep)
		return (c);
	if (c < ft_ultimate_len_calculator(strs, sep) - ft_strlen(sep) - 1)
	{
		while (sep[k])
		{
			tab[c] = sep[k];
			k++;
			c++;
		}
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		c;

	c = 0;
	i = -1;
	j = -1;
	if (size == 0 || !strs)
		ft_strdup("");
	tab = malloc(sizeof(char) * ft_ultimate_len_calculator(strs, sep));
	if (!tab)
		return (NULL);
	while (strs[++i])
	{
		while (strs[i][++j])
		{
			tab[c] = strs[i][j];
			c++;
		}
		c = ft_sep_copier(strs, sep, c, tab);
		j = -1;
	}
	tab[c] = '\0';
	return (tab);
}

/*int main(int argc, char *argv[])
{
	char *sep = "555555555555555555";
	
	printf("%s", ft_strjoin(argc, argv, sep));
}*/