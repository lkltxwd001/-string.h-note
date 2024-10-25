//字符串str1中至多maxsize个字符与字符串str2比较
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1  ="hello,world!" ;
   char * str2  ="hello,human!"; 
  
   int res= strncmp(str1, str2,5);
   if(res<0)
	 printf("str1小于str2\n");
   else if(res==0)
	 printf("str1等于str2\n");
   else
	 printf("str1大于str2\n");
   printf("\n");
   system("pause");
   return(0);
}