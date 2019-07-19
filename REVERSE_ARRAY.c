#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int arr[argc-1];
    int k=0;
    for(int i=1;i<argc;i++)
    {
    arr[k++]=atoi(argv[i]);
    }
   printf("\nOriginal array is :\n");
    for(int i=0;i<k;i++)
    {
    printf("%d ",arr[i]);
    }
    // reverse array
    printf("\nreverse array is :\n");
    for(int i=k-1;i>=0;i--)
    {
        printf("%d ",arr[i]);

    }
    
    return 0;
}
