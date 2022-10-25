/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonoff <vsozonoff@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:34:18 by vsozonoff         #+#    #+#             */
/*   Updated: 2022/08/29 17:55:36 by vsozonoff        ###   ########.fr       */
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

    int c;
    c = 0;

    while (argv[1][c])
    {
        write(1, &argv[1][c], 1);
        c++;
    }

    write(1, "\n", 1);
}