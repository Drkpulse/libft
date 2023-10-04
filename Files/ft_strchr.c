char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while(str)
    {
        if (str[i] == c)
        {
            return str;
        }
    }    
}



#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   char *rete;

   ret = strchr(str, ch);
   rete = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, rete);
   
   return(0);
}