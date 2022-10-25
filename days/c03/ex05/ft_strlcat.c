/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:16:18 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/26 11:47:23 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	destlen;
	int srclen;
	
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	while (destlen)
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = '\0';
	return (srclen);
}


int main()
{ 
	char dst1[27] = "vim est vraiment "; // 27 soit la valeur max de la chaine qu'on voulait faire
	char src1[11] = "0123456789";

	printf("valeur strlcat = %li\n", strlcat(dst1, src1, 28));
	printf("strlen dst %i\n", ft_strlen(dst1));
	printf("strlen src %i\n", ft_strlen(src1));
	printf("dst = %s \n", dst1);

	char dst2[27] = "vim est vraiment "; // 27 soit la valeur max de la chaine qu'on voulait faire
	char src2[11] = "0123456789";

	printf("valeur MYstrlcat = %i\n", ft_strlcat(dst2, src2, 28));
	printf("strlen dst %i\n", ft_strlen(dst2));
	printf("strlen src %i\n", ft_strlen(src2));
	printf("dst = %s \n", dst2);
}

