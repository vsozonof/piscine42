/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:28:41 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/29 19:38:21 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return(0);
    }

    int c = 0;
    int i = 0;

    while(argv[1][c])
    {
        if (argv[1][c] == argv[2][i])
        {
            argv[1][c] = argv[3][i];
            write(1, &argv[1][c], 1);
            c++;
        }
        else
        {
            write(1, &argv[1][c], 1);
            c++;
        } 
    }

    write(1, "\n", 1);
    
    }

