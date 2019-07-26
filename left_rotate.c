   #include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a[argc-2];
	int k=0;
	for(int i=1;i<=argc-2;i++)
	{
		a[k++]=atoi(argv[i]);
	}

	int r= atoi(argv[argc-1]);
	for(int i=0;i<r;i++)
	{
                int j;
		int x=a[0];
		for(j=0;j<k;j++)
		{
			a[j]=a[j+1];
		}
          a[k-1]=x;
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

