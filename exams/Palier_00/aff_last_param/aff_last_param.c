/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:58:42 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/29 18:37:08 by vsozonoff        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return(0);
    }

    int c = 0;
    int i = 0;

    while (i < argc)
    {
        i++;
    }

    i--;

    while (argv[i][c])
    {
        write(1, &argv[i][c], 1);
        c++;
    }

    write(1, "\n", 1);

    
}