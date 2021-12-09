#include <stdio.h>

/* char    *ft_strstr(char *str, char *tofind)
{    
    int i;
    int j;    
      
    if (tofind[j] == '\0')
    {
        return(str);
    }
    while (str[i] != '\0')
    {        
        if (str[i + j] == tofind[j])
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
    return (str);
} */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
    char haystack[] = "the best kind of cake is black forest";
    char needle[] = "fore";

    ft_strstr(haystack, needle);

    printf("The complete string is: %s", ft_strstr(haystack, needle));
    return 0;
}