//原型 size_t strcspn(const char * str1,const char * str2)
//返回字符串str1中包含str2中字符的前缀的长度
//字符串str1中第一个在字符串str2中出现的字符下标
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1  ="world!" ;
   char * str2="jbgar"; 
 
   int len;
   len = strcspn(str1, str2);/*world中r在ar中出现了，它的下标是2(从0开始)*/
 
   printf("\nstr1中找到第一个在str2中出现的字母，它的下标为:%d\n", len);
 
   system("pause");
   return(0);
}