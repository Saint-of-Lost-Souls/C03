#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{

    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
           return (1);                
        }
        i++;
    }
    return 0;   
}         
    
int main()  
{  
   char str1[] = "the cake is pizza"; // declaration of char array  
   char str2[] = "the cake is pizza"; // declaration of char array  
   
   int c = ft_strcmp(str1,str2); // calling compare() function  

   if(c == 0)  
   printf("strings are same");  
   else  
   printf("strings are not same and there's nothing wrong with that");  
  
    return 0;  
}