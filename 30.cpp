#include <bits/stdc++.h>
using namespace std;
int pali(string s)
{
 for(int i=0;i<=s.size()/2;i++)
   {
   	if(s[i]!=s[s.size()-1-i])
   	{
   		return -1;

   	}



   }
   return 0;
}

int main(int argc, char const *argv[])
{
   string s;
   cin>>s;
   int c=pali(s);
   if(c==0)
   {
   	cout<<"yes";
   }
   else
   {
   	cout<<"no";
   }

}