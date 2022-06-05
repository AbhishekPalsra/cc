#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
         
       int n;
       cin>>n;
       int height1[n];

       for(int i=0;i<n;i++)
       {
       	cin>>height1[i];
       }
       sort(height1,height1+n); // 1 1 2 3
       // freq of all numbers
       int freq[n];
       int height2[n];
       int k=0; 
       int j;
       for(int i=0;i<n;i++)
       	{
       		int count=0;
       		int temp=height1[i];
       		for(j=i;j<n;j++)
       		{
       			if(height1[j]==temp)
       			{
       				count++;


       			}
       			else
       			{
                    
       				break;
       			}
       			







       		}
       		freq[k]=count;
       		height2[k]=temp;
       		k++;
       		i=j-1; //*
       	}
       	// for(int i=0;i<k;i++)
       	// {
       	// 	cout<<freq[i]<<" "<<height2[i]<<endl;

       	// }
       	// cout<<endl;
        
        // max(height2+(freq-1)
        int max=0;
        for(int i=0;i<k;i++)
        {
        	if(height2[i]+freq[i]-1 >max)
        	{
        		max=height2[i]+freq[i]-1 ;
        	}


        }
        cout<<max<<endl;











	}
	return 0;
}
