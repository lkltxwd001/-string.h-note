#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
   char * str="hello,world!" ;
   char  c=',' ;
   char * pos;
   pos=(char*) memchr(str,c,10);
  
   printf("\n\",\"在\"hello,world\"的下标位置为：%d\n", pos-str);
 
   system("pause");
   return(0);
}