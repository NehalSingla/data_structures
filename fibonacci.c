#include<stdio.h>
#include<stdlib.h>
int fibonacci(int k);
int main(int argc,char *argv[])
{
	int c=atoi(argv[1]);
	printf(" Number of elements are %d\n",c);
	int n=0;
	for(int i=0;i<c;i++)
	{
		int d=fibonacci(n);
		printf("%d ",d);
		n++;
	}

}
int fibonacci(int k)
{
	if(k==0)
		return 0;
        else if (k==1)
		return 1;

	else
		return(fibonacci(k-1)+fibonacci(k-2));
}
