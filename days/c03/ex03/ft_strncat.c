/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:54:18 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/24 10:12:46 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	destlen;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] && nb > 0)
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
		nb--;
	}
	dest[destlen] = '\0';
	return (dest);
}
