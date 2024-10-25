//将字符串src连接到dest的尾部
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * src="world" ;
   char  dest[50] ="hello,"; /*目标字符串必须声明足够的长度，足够连接src字符串长度*/
  
   strcat(dest, src);
   printf("目标字符串:%s\n",dest);
   system("pause");
   return(0);
}
