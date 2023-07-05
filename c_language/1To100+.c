#include<stdio.h>
int main()
{	

    int n, i, sum = 0;										//Ex.1 to ..... sum//

    printf("Enter a positive integer : ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
	{
        sum += i;
    }

    printf("Sum : %d", sum);

}