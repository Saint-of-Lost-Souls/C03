#include <stdio.h>

char    *ft_strstr(char *str, char *tofind)
{    
    int x;
    int y;
    int c;

    while (str[x] != '\0')
    {
        if (str[x] != tofind[y])
        {
            x++;
        }
        else if(str[x] == tofind[y])
        {
            while (tofind[y] != '\0')
            {
                if (str[x] == tofind[y])
                {
                    x++;
                    y++;
                    c++;
                }
                else
                {                        
                    break;
                }
            }
        }
        
    }
    return (str);
}

int main()
{
    char str[] = "chocolatecake, carrotcake, pancake, donuts, muffin";
    char tofind[] = "cake";
    
    ft_strstr(str, tofind);


    printf("The complete string is: %s", str);
    return 0;
}