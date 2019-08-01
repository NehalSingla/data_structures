#include<stdio.h>
#include<stdlib.h>

int check_hammingDistance(int arr[],int k,int arr2[],int j)
{
	int count=0;
	for(int i=0,x=0;i<k,x<j;i++,x++)
	{
		if(arr[i]!=arr2[x])
			count++;
	}
	return count;
}
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
            
	int j=0;
	int arr2[k];
	for(int i=0;i<k;i++)
	{
		arr2[j++]=arr[i];
	}
	int max=0,rotations;
	for(int i=0;i<k;i++)
	{
		int temp;
		temp=arr[k-1];
		for(int x=k-1;x>0;x--)
		{
			arr[x]=arr[x-1];
		}
		arr[0]=temp;
		int h=check_hammingDistance(arr,k,arr2,j);
		if(h>max)
			max=h;
		       rotations=i+1;
	}
	printf("Maximum Hamming Distance is %d in %d rotations",max,rotations);
	return 0;
}

				
