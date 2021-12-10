#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{    
    int i;
    int j;

    i = 0;
    j = 0;       
    while(dest[i] != '\0')
    {        
        i++;
    }    
    while(src[j] != '\0')
    {
        dest[i + j] = src[j];        
        j++;            
    }
    dest[i + j] = '\0';     
    return (dest);
}

int main()
{
    char dest[35] = "The cake is a lie";
    char src[15] = "And so are you";
    
    ft_strcat(dest, src);

    printf("The complete string is: %s", dest);
    return 0;
}

