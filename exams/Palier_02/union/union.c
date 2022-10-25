/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:09:28 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/27 18:31:39 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int tab1[127] = {0};

    int c = 0;
    
    if (argc != 3)
    {
        write(1, "\n", 1);
        return(0);
    }

    c = 0;

    while (argv[1][c])
    {
        if (tab1[argv[1][c]] == 0)
        {
            write(1, &argv[1][c], 1);
            tab1[argv[1][c]] = 1;
            
        }

        c++;
        
    }

    c = 0;

    while (argv[2][c])
    {
        if (tab1[argv[2][c]] == 0)
        {
            write(1, &argv[2][c], 1);
            tab1[argv[2][c]] = 1;
        }

        c++;
        
    }
    

    
}