#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int n)
{
    int x;
    int y;
    x = 0;
    y = 0;

    while(dest[x] != '\0')
    {
        x++;
    }
    while(src[y] != '\0' && y < n)
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
    char dest[35] = "The cake is a lie";
    char src[15] = "And so are you";
    
    ft_strncat(dest, src, 10);

    printf("The complete string is: %s", dest);
    return 0;
}