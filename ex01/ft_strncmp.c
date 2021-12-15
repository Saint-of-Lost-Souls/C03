#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while ((s1[i] || s2[i]) && (i < n)
    {       
        if (s1[i] < s2[i])
        {
            return (-1);
        }
        else if (s1[i] > s2[i])
        {
            return (1);
        }   
        i++;          
    }    
    return (0);
}

#include <stdio.h>
int main()
{
    char string_1[] = "the cake is a lie";
    char string_2[] = "the pizza is cake";
    unsigned int n = 3;

    int result = ft_strncmp(string_1, string_2, n);

    if (result == 0)
    {
        printf("These strings are the same, but competely different");
    }
    else
    {
        printf("there strings are different and there's nothing wrong with that");
    }
    return 0;
}