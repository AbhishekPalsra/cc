#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
   string s;
   cin>>s;
   string sRev="a";
   for(int i=s.size()-1;i>=0;i--)
   {
      // sRev=sRev+s[i]; // adding charecters to string end
        sRev.push_back(s[i]); //O(1)
        // s=s+'a'; // depends upon size
        // s[i] is a character

   }

   cout<<sRev<<endl;
   if(sRev==s)
   	cout<<"yes";
   else
   	cout<<"no";



}
