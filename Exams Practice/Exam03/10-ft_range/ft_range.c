#include <stdlib.h>
// #include <stdio.h>

int        ft_positive(int n)
{
    // If it is negative, change to positive
    if (n < 0)
        return (-n);
    return (n);
}

int    *ft_range(int start, int end)
{
    int        size;
    int        i;
    int        *tab;
    // 'size' receives the range between the start and the end
    size = ft_positive(end - start) + 1;

    // Memory allocation and check
    tab = (int *)malloc(sizeof(int) * size);
    if (tab == NULL)
        return (0);
    i = 0;

    // If Start is less than or equal to the end
    if (start <= end)
    {
        while (i < size)
        {
            // tab receives start + 1
            tab[i] = start + i;
            i++;
        }
    }
    // If Start is greater than end
    else if (start > end)
    {
        while (i < size)
        {
            // tab receives start - 1
            tab[i] = start - i;
            i++;
        }
    }
    return (tab);
}
/* 
int        main(void)
{
    int i = 0;
    int start = 0;
    int end = -3;
    int size = ft_positive(end - start) + 1;
    int *tab = ft_range(start, end);
    
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
} */