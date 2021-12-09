#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int n)
{
    int i;
    int j;
        
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0' && i < n)
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
    
    ft_strncat(dest, src, 5);

    printf("The complete string is: %s", dest);
    return 0;
}