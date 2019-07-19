#include<stdio.h>
#include<stdlib.h>
void reverse(int arr[],int str,int end)
{
        if(str<end)
        {
                int temp=arr[str];
                arr[str]=arr[end];
                arr[end]=temp;
                reverse(arr,str+1,end-1);
        }
      
}

int main(int argc,char *argv[])
{
	 int arr[argc-1];
         int k=0;
         for(int i=1;i<argc;i++)
           { 
               arr[k++]=atoi(argv[i]);
           
	   }
	  int f=0;
	  int l= k-1;
	  reverse(arr,0,l);
	  for(int i=0;i<argc-1;i++)
        {
                printf("%d ",arr[i]);
        }

	  return 0;
}


