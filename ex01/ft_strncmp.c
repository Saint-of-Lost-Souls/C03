#include <stdio.h>


int st_strncmp(char *s1, char 2*, unsigned int n)
{
    int i;
    int same;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        while (str[i] < n && s2[i] < n)
        {
            if (s1[i] == s2[i])
            {
                same = 0;
            }
            else
            {   
                same = 1;                
            }
        }
    }
    return (same);
}

int main()
{

    ft_strncp(string_1, string_2, 10);
    if (same == 0)
    {
        printf("There strings are the same");
    }
    else
    {
        printf("there strings are different and there's nothing wrong with that");
    }
    return 0;
}