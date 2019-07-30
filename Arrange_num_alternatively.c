#include<stdio.h>
#include<stdlib.h>
void swap1(int *arr,int i,int j);
void separate_num(int *arr,int size)
{
	int i,left=0,right=size-1;
        while(right>left)
        {
                while(arr[left]<0)
                        left++;
                while(arr[right]>0)
                        right--;
                if(left<right)
                {
                        swap1(arr,left,right);
                }
        }

}
void alternate_arrange(int *arr,int size)
{
	int i,j;
	int index=0;
	separate_num(arr,size);
      //  printf("hello");
	for(int i=0;i<size;i++)
	{
		if(arr[i]>0)
		{
			index=i;
		break;
		}
	}
	for(int j=1;(j<index)&&(arr[j]<0);j+=2)
	{       
             //		printf("hi");
		
		swap1(arr,index,j);
		index++;
	}
	
	for(int k=0;k<size;k++)
	{
		printf("%d ",arr[k]);
	}

		

}

void swap1(int *arr,int left,int right)
{
	int temp=arr[right];
	arr[right]=arr[left];
	arr[left]=temp;
}

int main(int argc,char*argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}

	alternate_arrange(arr,k);
	return 0;
}
