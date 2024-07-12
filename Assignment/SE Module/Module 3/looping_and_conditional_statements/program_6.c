// WAP to print Fibonacci series up to given numbers
#include<stdio.h>
void main()
{
    int i=1,n, t,t1,t2;
    printf("Enter Number of Fibonacci Values Needed : ");
    scanf("%d",&n);
    t=0;
    t1=1;
    t2=1;
    do
    {
        i++;
        printf("%d\n",t);
        t1=t2;
        t2=t;
        t=t1+t2;
    }
    while(i<=n);
}