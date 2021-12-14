
#include <unistd.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0' || to_find[j] != '\0')
    {
        if (to_find[j] != str[i])
        {
            j++;
            i = 0;
        }
        else{
            i++;
            j++;
        }
    }
    if (to_find[j] == '\0')
    {
        return 1;
    }
    else{
        return -1;
    }
    return (str);
}

int main()
{
    char str[] = "Blackforest, carrotcake, forestry";
    char to_find[] = "forest";

    ft_strstr(str, to_find);

}
}