#include<iostream>
#include<stdlib.h>
using namespace std;
int findrotationcount(int arr[],int k)
{
	int low=0;
	int high=k-1;
	while(low<=high)
	{
	//if array is sorted
	
	if(arr[low]<arr[high])
         	return low;
        int mid=(low+high)/2;
	 //find next and previous element to find pivot
	 int next=(mid+1)%k;
	 int prev=(mid-1+k)%k;
      //if mid element is less than  next and previous element then
      //it is the minimum element of array 
	 if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
	     return mid;

	 else if(arr[mid]<=arr[high])
		 high = mid-1;
	
	else if(arr[mid]>=arr[low])
		low=mid+1;

       }
       return -1;
    }


int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc;i++)
	{
		arr[k++]=atoi(argv[i]);
	}

    int count=findrotationcount(arr,k);
	cout<<"No. of rotations "<<count;
	return 0;
}
