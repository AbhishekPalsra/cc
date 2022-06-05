#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string sRev; // abhishek
	for(int i=0;i<s.size()/2;i++)
	{
		char a= s[i];
		s[i]=s[(s.size())-1-i];
		s[(s.size())-1-i]=a;



	}
	// s[i] is a chracter in string
	 sRev=s;
	cout<<sRev<<endl;
}