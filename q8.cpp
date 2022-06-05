#include<bits/stdc++.h>
using namespace std;
int floor(int arr[],int n,int target)
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
	if(target<arr[0])
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
	return h;


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
   // floor ---- biggest number smaller than equal to the target element
    //sorted array ----> binary search
   cout<<floor(arr,n,target);












	return 0;
}