#include <stdlib.h>
#include <stdio.h>


int ft_len(int start, int end)
{
    int i = 0;
    int  save_start = 0;
    
    save_start = start;

    
    if (save_start <= end)
    {
        while (save_start <= end)
        {
            i++;
            save_start++;
        }
    }
    else if (save_start >= end)
    {
        while (save_start >= end)
        {
            i++;
            save_start--;
        }
    }
 
    return(i);
}

int *ft_range(int start, int end)
{
    int *tab;
    int c = 0;
    int len = ft_len(start, end);

    if (!tab)
    {
        return(NULL);
    }

    tab = malloc(sizeof(int) * (len));

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