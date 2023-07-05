#include<stdio.h>
main()
{
	int a,b,c,d,e,f,sum,per;
	
	
	printf("\nEnter Your English Marks : ");
	scanf("%d", &a);
	
	printf("\nEnter Ypur Gujarati Marks : ");
	scanf("%d", &b);
	
	printf("\nEnter Your Science Marks : ");
	scanf("%d", &c);
	
	printf("\nEnter Your Maths Marks : ");
	scanf("%d", &d);
	
	printf("\nEnter Your Social Science Marks : ");
	scanf("%d",&e);
	
	printf("\nEnter Your Sanskrit Marks : ");
	scanf("%d", &f);
	
	sum = a+b+c+d+e+f;
	printf("\nYour Total Marks : %d",sum);
	
	per = sum/6;
	printf("\nYour Percentage : %d",per);
	
	if (per > 70)
	{
		printf("\nCongratulations!! You Got Distinction");
	}
	
	else if (per > 60)
	{
		printf("\nYou got First Class");
	}
	
	else if (per > 50)
	{
		printf("\nYou got Secound Class");
	}
	
	else if (per > 33)
	{
		printf("\n Pass Class");
	}
	
	else
	{
		printf("\nFail!!");
	}
	
	printf("\n");
	
	
//	float marks;											//Enter Marks and Chack Pass Ya Fail//
//	printf("\nEnter Your Marks (0 To 100) : ");
//	scanf("\n%f",&marks);
//	
//	if(marks >=0 && marks <= 33)
//	{
//		printf("\n Sorry You have a Fail!!!");
//	}
//	else if(marks > 30 && marks <= 100)
//	{
//		printf("\n You Have a Pass");
//	}

}