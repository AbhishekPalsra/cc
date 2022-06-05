#include<bits/stdc++.h>
using namespace std;
int main()
{
  // string is used for storing more than long long int 10^18
  // long long int a;
  // cin>>a;
  // cout<<a;
  // overflow
  string s;
  cin>>s;
  cout<<s[s.size()-1]<<endl; // this a character
  cout<<(int)s[s.size()-1]<<endl; // asscii value;
  int lastDigit= s[s.size()-1]-'0'; // this is integer
  cout<<lastDigit<<endl;








}