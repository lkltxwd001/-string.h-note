//查找字符c在src中的第一次出现的位置
//字符c在src中第一次出现的指针
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str  ="hello,world!" ;
  
   char * pos;
  
   pos= strchr(str, 'o');
   
   printf("\n 字符第一次出现的位置为第%d个（从0开始），内存地址为:0x%x\n", pos-str,pos );
   //pos - str 计算的是指针之间的距离，也就是字符 'o' 在字符串中的索引位置。
   system("pause");
   return(0);
}