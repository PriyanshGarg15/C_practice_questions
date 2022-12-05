#include <stdio.h>

int main()
{
    int n,i,pos,j,k;
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
    for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
             
            if ( a[i] == a[j])  
            {  
                 
                for ( k = j; k < n; k++)  
                {  
                    a[k] = a[k + 1];  
                }  
               
                n--;  
                j--;      
            }  
        }  
    printf("\nyour updated array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}
}
