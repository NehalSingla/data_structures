#include<stdio.h>
int main()
{
    printf("Enter no of elements :");
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :");
        scanf("%d",&arr[i]);
    }
    printf("Enter value to search : ");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("%d is found at %d",x,i+1);
            break;
        }
    }
    if(x==n)
        printf("%d is not present",x);
    return 0;
}
