#include<stdio.h>
int main()
{
    printf("Enter no of elements :");
    int n,x;
    scanf("%d",&n);
    int arr[n];
     printf("Enter element :");
    for(int i=0;i<n;i++)
    	{
        
       		 scanf("%d",&arr[i]);
   	 }
    printf("Enter value to search : ");
    scanf("%d",&x);

    int low=0,high=n-1;
   

    while(low<=high)
       
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        {
            printf("%d present at index %d",x,mid);
            break;
        }
        else if(x>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
      
    }
    return 0;
}
