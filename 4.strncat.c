//将字符串src最多前maxsize个字符连接到dest的尾部
//src中必须有字符串结束符  '\0'
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * src="world" ;
   char  dest[50] ="hello,"; /*目标字符串必须声明足够的长度，足够连接src字符串长度*/
  
   strncat(dest, src,3);
   printf("目标字符串:%s\n",dest);
   system("pause");
   return(0);
}
