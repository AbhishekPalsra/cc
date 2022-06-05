#include <bits/stdc++.h>
using namespace std;
int fun(int arr[],int n)
{

 
 	if(arr[n-1]==0)
 	{
 		int count=0;
 		for(int i=n-1;i>=0;i--)
 		{
 			if(arr[i]==0)
 			{
 				count++;
 			}
 			else
 			{
 				return n-count-1;	
 			}

 		}

 	}
 	else
 	{
 		return n-1;

 	}

    
 }


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<fun(arr,n)<<endl;





	}
	return 0;
}
