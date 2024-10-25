#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
   char  str1[13]  ;
   char * str2="hello,world!" ;
  
   memcpy(str1,str2,13);
	
   printf("\nstr1中字符为：%s\n", str1);
 
   system("pause");
   return(0);
}