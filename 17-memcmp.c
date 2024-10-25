#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
   char * str1="hello,world!" ;
   char * str2="helle" ;
   char * resstr;
   int res=memcmp(str1,str2,5);
   if(res<0)
	  resstr="小于";
   else if(res=0)
	   resstr="等于";
   else 
	   resstr="大于";
   printf("\nstr1的前5个字符%sstr2的字符\n", resstr);
 
   system("pause");
   return(0);
}