/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:55:25 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/27 16:03:30 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    int     c;
    int     tab[11];

    c = 0;

    while (nb > 0)
    {
        tab[c] = nb %10;
        nb = nb / 10;
        c++;
    }

    c--;

    while (c >= 0)
    {
        ft_putchar(tab[c] + '0');
        c--;
    }
    
    
}

int main (void)
{
    int nb;
    nb = 1;

    while (nb <= 100)
    {
        if (nb % 3 == 0 && nb % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (nb % 3 == 0)
        {
            write (1, "fizz", 4);
        }
        else if (nb % 5 == 0)
        {
            write (1, "buzz", 4);
        }
        else
        ft_putnbr(nb);

        write (1, "\n", 1);
        nb++;
    }
    
}