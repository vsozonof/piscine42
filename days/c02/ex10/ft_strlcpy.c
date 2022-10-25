/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:10:20 by vsozonof          #+#    #+#             */
/*   Updated: 2022/09/23 10:37:11 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int			i;
	unsigned int			c;

	i = ft_strlen(src);
	c = 0;
	if (size > 0)
	{	
		while (c < size - 1)
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (i);
}

/*
int main()
{
	char dest[]= "bateau";
	char src[]= "avion";
	
	printf("mienDEST AVANT%s\n", dest);
	printf("INT = %i\n", strlcpy(dest, src, 4));
	printf("mienDEST apres%s\n", dest);

	char dest2[]= "bateau";
	char src2[]= "avion";

	printf("DEST AVANT%s\n", dest2);
	printf("INT = %i\n", strlcpy(dest2, src2, 4));
	printf("DEST apres%s\n", dest2);
	
}*/