#include<stdio.h>
int main()
{	int a,b,c,d,e;
    int i;
    int sum=1;
    printf("enter the number:-\n");
    scanf("%d",&a);
    for(i=1;i<=a;i+=1)
    sum=sum*i;
    printf("THE FACTORIAL  IS %d\n",sum);
    return 0;

}
