#include<iostream>
#include<stdlib.h>
using namespace std;

void spiral_matrix(int r,int c,int **arr)
{
	int k=0,m=r,l=0,n=c;
	while(k<m && l<n)
	{
		for(int i=l;i<n;i++)
		{
			cout<<arr[k][i]<<" ";
		}
		k++;

		for(int i=k;i<m;i++)
		{
			cout<<arr[i][n-1]<<" ";
		}
		n--;

		for(int i=n-1;i>=l;i--)
		{
			cout<<arr[m-1][i]<<" ";
		}
		m--;
		for(int i=m-1;i>=k;i--)
		{
			cout<<arr[i][l]<<" ";
		}
		l++;
	}
}
int main(int argc,char *argv[])
{
        int r=atoi(argv[1]);
        int c=atoi(argv[2]);

        int **arr=new int*[r];

        for(int i=0;i<r;i++)
        {
                arr[i]=new int[c];
        }
        int k=3;
        for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        arr[i][j]=atoi(argv[k]);
                        k++;
                }
        }
	spiral_matrix(r,c,arr);
	return 0;
}

