#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num <= 0) printf("less or equal");
	else printf("more than zero");
	return 0;
}