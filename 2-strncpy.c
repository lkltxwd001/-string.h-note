/*
src指向的字符 复制到dest中，并返回dest,限制最大字符串长度 maxsize。
当src中少于maxsize时，使用‘\0’填充。
其中size_t是无符号整型，保证maxsize始终为正数。
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * src="hello,world!";
   char dest[20];
   strncpy(dest, src, 20);
  
   printf("源字符串  :%s\n",src);
   printf("目标字符串:%s\n",dest);
   system("pause");
   //from stdlib.h
   //"pause" 是 Windows 系统中的一个命令，它会让程序暂停，等待用户按任意键继续。
   ///主要用于在控制台程序结束后不立即关闭窗口，方便查看输出结果。
   return(0);
}