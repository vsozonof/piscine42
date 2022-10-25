/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:04:56 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/13 17:40:23 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int c  = 0;
    int max = 0;

    if (len <= 0)
    {
        return(0);
    }

    while(len)
    {
        if(tab[c] > max)
        {
            max = tab[c];
        }
        c++;
        len--;
    }

    return(max);
}