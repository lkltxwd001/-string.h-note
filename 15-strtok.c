#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
   char  str [] ="hello@world@coffee@tea!" ;
   char * c="@" ;
 
  
   printf("\n第一个:%s\n", strtok(str,c));
   printf("\n第二个:%s\n", strtok(NULL,c));
   printf("\n第三个:%s\n", strtok(NULL,c));
   printf("\n第四个:%s\n", strtok(NULL,c));
 
   printf("\n再重新开始:%s\n", strtok(str,c));
   system("pause");
   return(0);
}
/*
char str[] = "hello@world@coffee@tea!";
定义了一个字符串 str，其中 @ 作为分隔符。

char * c = "@" ;
定义了一个分隔符字符串 c，其内容是 "@"，表示我们将使用 @ 来分割字符串。

strtok(str, c)
第一次调用 strtok()，传入原始字符串 str 和分隔符 c，它会找到第一个 @ 并将其替换为 \0，返回第一个分隔的子字符串 "hello"。

strtok(NULL, c)
后续调用 strtok(NULL, c)，NULL 表示继续处理上一次操作中剩下的部分。每次调用会找到下一个 @，并返回下一个子字符串：

第二次返回 "world"
第三次返回 "coffee"
第四次返回 "tea!"
*/