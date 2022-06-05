#include <bits/stdc++.h>
using namespace std;
int max(int l1,int l2)
{
	if(l1>=l2)
		return l1;
	else
		return l2;
}
int main(int argc, char const *argv[])
{

   int t;
   cin>>t;
   while(t--)
   {
   	 int l1,r1,l2,r2;
     cin>>l1>>r1>>l2>>r2;
     if(r1<l2 || r2<l1)
     {
        cout<<l1+l2<<endl;
 
     }
     else
     {
     	cout<<max(l1,l2)<<endl;  
     	   }





   }




}