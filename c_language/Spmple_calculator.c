#include <stdio.h>
int main()
{
    int a,b,c,d,e,ans;

    printf("\nenter a = ");
    scanf("%d", &a);
    printf("\nenter b = ");
    scanf("%d", &b);
    printf("\nenter c = ");
    scanf("%d", &c);
    printf("\nenter d = ");
    scanf("%d", &d);
    printf("\nenter e = ");
    scanf("%d", &e);

    ans = a+b+c+d+e;
    printf("\nAddition = %d",ans);
    ans = a-b-c-d-e;
    printf("\nSubtraction = %d",ans);
    ans = a*b*c*d*e;
    printf("\nMultiplication = %d",ans);
    ans = a/b/c/d/e;
    printf("\nDivision = %d",ans);
    ans = a%b%c%d%e;
    printf("\nReminder = %d",ans);

	
}
