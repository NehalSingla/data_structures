#include<stdio.h>
#include<stdlib.h>

void rotate_array(int arr[],int k,int r)
{
	int temp[r];
	for(int i=0;i<r;i++)
	{
		temp[i]=arr[i];
	}
	for(int i=r;i<k;i++)
	{
		arr[i-r]=arr[i];
	}
	for(int i=k-r,j=0;i<k;i++,j++)
	{
		arr[i]=temp[j];
	}
}
int main(int argc,char *argv[])
{
	int arr[argc-2];
	int k=0;
	for(int i=1;i<argc-1;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	int r=atoi(argv[argc-1]);
          
	rotate_array(arr,k,r);
	for(int i=0;i<k;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

