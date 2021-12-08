#include <stdio.h>

char    *ft_strstr(char *str, char *tofind)
{
    // append dest to put src at end
    int x;
    int y;
    x = 0;
    y = 0;

    while(dest[x] != '\0')
    {
        x++;
    }
    while(src[y] != '\0')
    {
        dest[x] = src[y];
        x++;
        y++;
    }
    dest[x] = '\0';     
    return (dest);
}

int main()
{
    char str[] = "The cake is a lie";
    char str_1[] = "And so are you";
    
    ft_strstr(str, tofind);

    printf("The complete string is: %s", str);
    return 0;
}