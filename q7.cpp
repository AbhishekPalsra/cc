#include<bits/stdc++.h>
using namespace std;
int ceiling(int arr[],int n,int target)
{
	// linear search O(n)
	// for(int i=0;i<n;i++)
	// {
	// 	if(arr[i]>=target)
	// 	{
	// 		return i;
	// 	}
	// }
	// return -1;
	// binary serch
	if(target>arr[n-1])
	{
		return -1;
	}
	int l=0;
	int h=n-1;
	int mid;
	bool isAsc= arr[l]<arr[h];
	while(l<=h)
	{

		mid= l+(h-l)/2;
		if(arr[mid]==target)
		{
			return mid;

		}
		else if(isAsc)
		{
			if(arr[mid]>target)
				h=mid-1;
			else
				l=mid+1;

		}
		else // descending
		{
			if(arr[mid]>target)
		         	l=mid+1;
			else
					h=mid-1;
				

		}
	}
	// l=h=mid
	// l=mid+1;
	return l;


}
int main()
{
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int target;
    cin>>target;
    // ceiling of a number --smallest number greater than equal to target number
    //sorted array ----> binary search
   cout<<ceiling(arr,n,target);












	return 0;
}