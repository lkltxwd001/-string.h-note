//strcpy(a,b)
//把b指向的字符  复制到  a
#include<stdio.h>
#include<string.h>
int main(void)
{
	char desn[10];	
	char* source="hello world!";
	strcpy(desn,source);
	printf("源字符串  :%s\n",source);
	printf("目标字符串:%s\n",desn);
	return 0;
}