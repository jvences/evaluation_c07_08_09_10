#include <stdlib.h>
#include "ft_stock_str.h"

int     ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strcpy(char * str)
{
    int i = 0;
    char * scpy;
    
    scpy = (char *) malloc ((ft_str_length(str) + 1) * sizeof(char));
    while (str[i] != '\0')
    {
        scpy[i] = str[i];
        i++;
    }
    scpy[i] = 0;
    return (scpy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i = 0;
    t_stock_str *allstr;
    
    allstr = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
    if (allstr == NULL)
        return (NULL);
    while (i < ac)
    {
        allstr[i].size = ft_str_length (av[i]);
        allstr[i].str = av[i];
        allstr[i].copy = ft_strcpy (av[i]);
        i++;
    }
    allstr[i].str = 0;
    return (allstr);
}
