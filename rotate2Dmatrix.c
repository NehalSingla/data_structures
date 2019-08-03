#include<stdio.h>
#include<stdlib.h>
#define m 5
#define n 5
# define r 1
void rotate(int row,int column,int arr[m][n],int m1,int n1 )
{


	if(row>m||row>n)
		return;
	if(row+1==m || column+1==n)
	return;
	int prev=0,curr=0;
	prev=arr[row+1][column];
	for(int i=column;i<n1;i++)
	{
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
	for(int i=row+1;i<m1;i++)
	{
		curr=arr[i][n1-1];
		arr[i][n1-1]=prev;
		prev=curr;
	}
	for(int i=n1-2;i>=column;i--)
	{
		curr=arr[m1-1][i];
		arr[m1-1][i]=prev;
		prev=curr;
	}
	for(int i=m1-2;i>0;i--)
	{
		curr=arr[i][column];
		arr[i][column]=prev;
		prev=curr;
	}
	row++;
	column++;
	m1--;
	n1--;
 
                                     
		rotate(row,column,arr,m1,n1);
}

int main()
{
	int arr[m][n]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int row=0;
	int column=0;
	int m1=m;
	int n1=n;

 for(int i=0;i<r;i++)
 {
	 rotate(row,column,arr,m1,n1);
 }
 for(int i=0;i<m;i++)
 {
	 for(int j=0;j<n;j++)
	 {
		 printf("%d\t",arr[i][j]);
				 }
				 printf("\n");

				 }
				 return 0;
				 }


