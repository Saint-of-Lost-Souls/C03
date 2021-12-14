#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{    
	int	    i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
} 
     

int main()  
{  
   char str1[] = "the cake is a lie"; // declaration of char array  
   char str2[] = "the cake is a lie"; // declaration of char array  
   
   int c = ft_strcmp(str1,str2); // calling compare() function  

   if(c == 0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}