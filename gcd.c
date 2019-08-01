#include<stdio.h>
#include<stdlib.h>

int hcf(int a,int b)
{
	if(a%b==0)
		return b;
	else
		return hcf(b,a%b);
}
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0,h;
	for(int i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}

	for(int i=0;i<k-1;i++)
	{
		h=hcf(arr[i],arr[i+1]);
		arr[i+1]=h;
	}
	printf("%d",h);
	return 0;

}
