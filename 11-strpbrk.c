//查找str2的任意字符在str1中第一次出现的位置，并返回指向这个位置的指针
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char * str1  ="world!" ;
   char * str2="glar"; 
   char * pos;
 
   pos = strpbrk(str1, str2);
   /*glar中的r是第一个在world中出现，将返回r的位置，
	虽然glar中的l在world中也出现，但是它不是第一个在world中出现的*/
 
   printf("\nstr2的字符在str1中第一个出现的字母是%c,它在str1的下标为%d\n", *pos,pos-str1);
 
   system("pause");
   return(0);
}
