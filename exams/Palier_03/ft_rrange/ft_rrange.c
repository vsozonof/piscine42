/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 00:39:44 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/09/01 17:13:24 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_len(int start, int end)
{
    int i = 0;
    int  save_start = 0;
    int temp;
    
    if (start <= end)
    {
        while (start <= end)
        {
            i++;
            start++;
        }
    }
    else if (start >= end)
    {
        while (start >= end)
        {
            i++;
            start--;
        }
    }
 
    return(i);
}

int *ft_rrange(int start, int end)
{
    int *tab;
    int c = 0;
    int len = ft_len(start, end);

    if (!tab)
    {
        return(NULL);
    }

    tab = malloc(sizeof(int) * (len));

    int temp = 0;
    
    temp = start;
    start = end;
    end = temp;

    if (start < end)
    {
        while (start <= end)
        {
            tab[c] = start;
            c++;
            start++;
        }
    }
    else if (start > end)
    {
        while (start >= end)
        {
            tab[c] = start;
            c++;
            start--;
        }
    }


    return(tab);

}

