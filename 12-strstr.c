//查找str2在在str1中第一次出现的位置，并返回指向这个位置的指针
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1  ="wohello,world!" ;
   char * str2="wor"; 
   char * pos;
 
   pos = strstr(str1, str2);
 
   printf("\n\"wor\"在\"wohello,world\"中第一个出现的位置下标为%d\n", pos-str1);
 
   system("pause");
   return(0);
}