#include<iostream>
#include<stdlib.h>
using namespace std;
void lower_matrix(int r,int c,int **arr)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i>=j)
		          cout<<arr[i][j]<<" ";
	                 else
		          cout<<"  ";
		}
                   cout<<endl;
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
	lower_matrix(r,c,arr);
	return 0;
}

