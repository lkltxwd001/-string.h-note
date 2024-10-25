#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
   char  str []="hello,world!" ;
   char  c='w' ;
 
   memset(str,c,5);
   printf("\n\str中字符串:%s\n", str);
 
   system("pause");
   return(0);
}