/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:53:30 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/11 15:26:43 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)

{
    int c = 0;
    
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }

    while(argv[1][c])
    {
        if (argv[1][c] == 'z')
        {
            argv[1][c] = 'a';
        } 
        else if (argv[1][c] == 'Z')
        {
            argv[1][c] = 'A';
        }
        else if (argv[1][c] >= 'a' && argv[1][c] <= 'y')
        {
            argv[1][c] += 1;
        }
        else if (argv[1][c] >= 'A' && argv[1][c] <= 'Y')
        {
            argv[1][c] += 1;
        }
        write(1, &argv[1][c], 1);
        c++;
    }
    write(1, "\n", 1);
    return 0; 
}