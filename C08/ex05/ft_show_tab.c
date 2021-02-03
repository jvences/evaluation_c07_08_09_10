#include "ft_stock_str.h"
#include <unistd.h>

void    ft_printstr (char *str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
        write (1, &str[i], 1);
        i++;
    }
}

void    ft_printd (int n)
{
    char p;
    
    if (n > 9)
        ft_printd (n / 10);
    p = n + 48;
    write (1, &p, 1);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;
    
    i = 0;
    while (par[i].str != 0)
    {
        ft_printstr(par[i].str);
        write (1, "\n", 1);
        ft_printd(par[i].size);
        write (1, "\n", 1);
        ft_printstr(par[i].copy);
        write (1, "\n", 1);
        i++;
    }
    
}
