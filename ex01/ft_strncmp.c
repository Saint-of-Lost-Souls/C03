#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    
    i = 0;
    while (i <= n)
    {
        while (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] == s2[i])
            {                
               return (0);
            } 
            {
                i++;
            }                                                                
        }
           
    }
    return (1);
}

int main()
{
    char string_1[] = "the cake is a lie";
    char string_2[] = "the cake is pizza";
    unsigned int n = 15;

    int result = ft_strncmp(string_1, string_2, n);

    if (result == 0)
    {
        printf("There strings are the same");
    }
    else
    {
        printf("there strings are different and there's nothing wrong with that");
    }
    return 0;
}