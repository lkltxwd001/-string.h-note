#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
   
   printf("\n \040 0 ：%s \n", strerror(0)); /* \040是空格的转义字符 */
   printf("\n \040 1 ：%s \n", strerror(1));
   printf("\n \040 2 ：%s \n", strerror(2));
   printf("\n \040 3 ：%s \n", strerror(3));
   printf("\n \040 4 ：%s \n", strerror(4));
   printf("\n \040 5 ：%s \n", strerror(5));
   printf("\n \040 6 ：%s \n", strerror(6));
   printf("\n \040 -1 ：%s \n", strerror(-1));
   system("pause");
 
   return(0);
}
/*
0:No error
1 :peration not permitted
2 :No such file or directory
3:Wo such process
4 :Interrupted fuction cal1
5 :Input/output error
6:No such device or address
-1 :Unknow error
*/