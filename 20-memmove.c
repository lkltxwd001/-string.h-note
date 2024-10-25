#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * src="hello,world!";
   char dest[20];
   memmove(dest, src, 20);
  
   printf("源字符串  :%s\n",src);
   printf("目标字符串:%s\n",dest);
   system("pause");
   return(0);
}