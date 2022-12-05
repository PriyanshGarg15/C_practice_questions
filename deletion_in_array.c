#include <stdio.h>

int main()
{
    int n,i,pos;
    printf("enter size of array u need=");
    scanf("%d",&n);
    int a[n];
    printf("\nenter elements of array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("\nyour array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter poss u want element to be deleted from");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
        
    }
    n--;
    printf("\nyour array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}
