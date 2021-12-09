#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{    
    int i;
    int j;
       
    while(dest[i] != '\0')
    {        
        i++;
    }    
    while(src[j] != '\0')
    {
        dest[i] = src[j];        
        i++;  
        j++;            
    }
    dest[i] = '\0';     
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

