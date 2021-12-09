#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{    
    int x;
    int y;
    int z;
    char combined;

    combined[sizeof(dest) + sizeof(src) + 1];
    x = 0;
    y = 0;
    z = 0;    
    while(dest[x] != '\0')
    {
        combined[z] = dest[x];
        x++;
        z++;
    }
    while(src[y] != '\0')
    {
        combined[z]] = src[y];        
        y++;
        z++;
              
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

