//没出现
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1 = "world!" ;
   char * str2 = "dewor"; 
 
   int len;
   len = strspn(str1, str2);/*world中l在是第一个没有在dewor中出现，它的下标是3*/
 
   printf("\nstr1中找到第一个没有在str2中出现的字母，它的下标为:%d\n", len);
 
   system("pause");
   return(0);
}