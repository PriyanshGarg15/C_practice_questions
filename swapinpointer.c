#include <stdio.h>
void swap(int*p1,int*p2)
{
    int c;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("value after swaping of variables are");
    printf("%d",*p1);
    printf("%d",*p2);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("value before swaping of variables are");
    printf("%d",a);
    printf("%d",b);
    swap(&a,&b);
}
