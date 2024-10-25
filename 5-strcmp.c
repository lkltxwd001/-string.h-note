/*
当str1<str2,返回值小于0
当str1=str2,返回值等于0
当str1>str2,返回值大于0
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1  = "hello,world!" ;
   char * str2  = "hello,human!"; 
  
   int res = strcmp(str1, str2);
   if(res<0)
	 printf("str1小于str2");
   else if(res==0)
	 printf("str1等于str2");
   else
	 printf("str1大于str2");
    printf("\n");
   system("pause");
   return(0);
}
