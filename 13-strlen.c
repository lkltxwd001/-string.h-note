//返回str的长度
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1  ="hello,world!" ;
  
   int len = strlen(str1);
 
   printf("\nstr1的长度：%d\n", len);
 
   system("pause");
   return(0);
}