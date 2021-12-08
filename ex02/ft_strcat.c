#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
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
    char dest[] = "The cake is a lie";
    char src[] = "And so are you";
    
    ft_strcat(dest, src);

    printf("The complete string is: %s", dest);
    return 0;
}

