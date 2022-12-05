#include<stdio.h>
int main()
{
    int n,i,x,poss;
    
    printf("enter size of array u need=");
    scanf("%d",&n);
    int a[n];

    
    printf("enter elements of array=\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter number you want to insert=");
    scanf("%d",&x);
    printf("\nenter position you want to insert number at=");
    scanf("%d",&poss);
    for(i=n-1;i>=poss-1;i--)
    {
        a[i+1]=a[i];
    }
    a[poss-1]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    
