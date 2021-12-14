#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
    {
		return (str);
    }
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
            {
				return (&str[i]);
            }
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{

    char haystack[] = "the best cake is blackforest";
    char needle[] = "fore";

    printf("%s", ft_strstr(haystack, needle));
    return 0;
}