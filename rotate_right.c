#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a[argc-2];
	int k=0;
	for(int i=1;i<argc-1;i++)
	{
		a[k++]=atoi(argv[i]);
	}
	int r=atoi(argv[argc-1]);

	for(int j=0;j<r;j++)
	{
	    int x= a[argc-3];
	    for(int i=argc-3;i>=0;i--)
	    {
		   a[i]= a[i-1];
	    }
	    a[0]=x;
	}
	for(int i=0;i<argc-2;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
