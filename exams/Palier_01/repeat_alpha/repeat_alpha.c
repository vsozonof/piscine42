/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:19:42 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/31 23:58:52 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    
    char lettre_min = 'a';
    char lettre_maj = 'A';
    
    int c = 0;
    int i = 0;

    while (argv[1][i])
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
        
            while (argv[1][i] != lettre_maj)
            {
            lettre_maj++;
            c++;
            }

            while (c >= 0)
            {
            write(1, &argv[1][i], 1);
            c--;
            }
        
            i++;
            lettre_maj = 'A';
            c = 0;

        }
        
        else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
        
            while (argv[1][i] != lettre_min)
            {
            lettre_min++;
            c++;
            }

            while (c >= 0)
            {
            write(1, &argv[1][i], 1);
            c--;
            }
        
            i++;
            lettre_min = 'a';
            c = 0;

        }
        
        
        
    }
}