#include <stdio.h>

char    *ft_strstr(char *haystack, char *needle)
{    
    int i;
    int j;    
      
    if (needle[j] == '\0')
    {
        return(haystack);
    }
    while (haystack[i] != '\0')
    {        
        while (haystack[i] == needle[j])
        {
            i++;
            j++;
            
        }

        {
            i++;
            j = 0;
        }
        else 
        {                          
            i++;
            j++;
        }               
    }
    return (haystack);
}

int main()
{
    char haystack[] = "the best kind of cake is black forest";
    char needle[] = "fore";

    ft_strstr(haystack, needle);

    printf("The complete string is: %s", ft_strstr(haystack, needle));
    return 0;
}