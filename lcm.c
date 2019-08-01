#include<stdio.h>
#include<stdlib.h>

int lcm(int a,int b)	{
	    int max=0;
		if(a>b)
			max=a;
		else
			max=b;
		while(1){
		if(max%a==0 && max%b==0)
		{
			return max;
		}
		max++;
		}
}
	
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0,m;
	for(int i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	for(int i=0;i<k-1;i++)
	{
	  m=lcm(arr[i],arr[i+1]);
	  arr[i+1]=m;
	}
	printf("%d ",m);

	return 0;
}


