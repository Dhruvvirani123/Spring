#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	
	printf("Enter Name : ");
	scanf("%s",&name);
	gets(name);
	
	printf("\nName = %s",name);
	puts(name);


//	char s1[20],s2[20];						//String Copy Funcation//
//	
//	printf("Enter Name : ");
//	gets(s1);
//	
//	strcpy(s2,s1);
//	puts(s2);




//	char s1[20],s2[20];							//String Length//
//	int n;
//	
//	printf("Enter Name : ");
//	gets(s1);
//	
//	n = strlen(s1);
//	printf("\nLength of String = %d",n);
	
}