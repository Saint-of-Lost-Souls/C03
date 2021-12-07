int     ft_strcmp(char *s1, char *s2)
{

    int flag;
        int i;

        flag = 0;
        i = 0;

        while(s1[i] != '\0' && s2[i] != '\0')
        {
       if(s1[i] != s2[i])
       {
           flag = 1;
           break;
       }
       i++;
    }
    if (flag == 0)
        {
                return 0;
        }
    else
        {
                return 1;
        }
}
int main()  
{  
   char str1[20]; // declaration of char array  
   char str2[20]; // declaration of char array  
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   int c= compare(str1,str2); // calling compare() function  
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}  '