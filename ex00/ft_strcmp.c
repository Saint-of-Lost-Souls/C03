#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
       
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
    {
        if (s1[i] > s2[i])
        {
            return (-1);                
        }
        else if (s1[i] < s2[i])
        {
            return (1);
        }
        i++;
    }
    return (0);   
}  
    
int main()  
{  
   char str1[] = "the cake is a lie"; // declaration of char array  
   char str2[] = "the cake is a lie"; // declaration of char array  
   
   int result = ft_strcmp(str1,str2); // calling compare() function  

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