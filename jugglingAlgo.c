#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else
		gcd(b,a%b);
}
void array_rotate(int arr[],int k,int r)
{
	int temp;
	int d=-1,j;
	for(int i=0;i<gcd(k,r);i++)
	{
		j=i;
		temp=arr[i];

		while(1)
		{
			d=(j+r)%k;
                        if(d==i)
				break;

			arr[j]=arr[d];
			j=d;
		}
		arr[j]=temp;
	}
}

int main(int argc,char *argv[])
{
	int a[argc-2];
	int k=0;
	for(int i=1;i<argc-1;i++)
	{
		a[k++]=atoi(argv[i]);
	}
	int rotations=atoi(argv[argc-1]);
	array_rotate(a,k,rotations);
	printf("Array after rotations\n");
	for(int i=0;i<k;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

