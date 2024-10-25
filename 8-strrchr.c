//查找字符在src中的最后一次出现的位置
//返回字符在src中的最后一次出现位置的指针
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str  ="hello,world!" ;
   char * pos;
 
   pos= strrchr(str, 'o');
   printf("\n 字符最后一次出现的位置为第%d个（从0开始），内存地址为:0x%x\n", pos-str,pos );
 
   system("pause");
   return(0);
}
