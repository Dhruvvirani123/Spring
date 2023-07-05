#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int n;
	
	printf("Entera a String : ");
	gets(s1);
	
	printf("Entera a String : ");
	gets(s2);
	
	strupr(s1);
	puts(s1);
	
	strupr(s2);
	puts(s2);
	
}