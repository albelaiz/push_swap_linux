#include "push_swap.h"

int duplecte(char **str)
{
    int i = 0;
    int j;

    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (!ft_strcmp(str[i],str[j]))
                return(0);
             j++;
        }
        i++;
    }
    return(1);
}
