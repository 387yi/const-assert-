#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//const和assert的使用
int my_strlen(char* str)
{
	assert(str != NULL);
	int rat = 0;
	while(*str != '\0')
	{
		rat++;
		*str++;
	}
	return rat;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}