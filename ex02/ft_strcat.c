#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    char cat;
    int x;
    int y;

    cat[sizeof(dest) + sizeof(src)];

    x = 0;
    y = 0;    
    while(dest[x] != '\0')
    {
        cat[x] = dest[x];
        ++x;
    }
    cat[x] = ' ';
    ++x;
    while(src[y] != '\0')
    {
        dest[x] += src[y];        
        ++y;
        ++x;        
    }
    dest[x] = '\0';     
    return (dest);
}


int main()
{
    char dest[] = "The cake is a lie";
    char src[] = "And so are you";
    
    ft_strcat(dest, src);

    printf("The complete string is: %s", dest);
    return 0;
}

