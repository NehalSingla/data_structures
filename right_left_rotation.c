#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int arr[argc-2];
	int k=0,temp;
	for(int i=1;i<argc-1;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	int r= atoi(argv[argc-1]);
	for(int i=0;i<r;i++)
	{
		temp=arr[(k/2)-1];
		for(int j=(k/2)-1;j>=0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	for(int i=0;i<r;i++)
	{
		temp=arr[k/2];
		for(int j=k/2;j<k;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[k-1]=temp;
	}
	printf("Array after first half right rotated  and second half left rotated\n");
	for(int i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
		

