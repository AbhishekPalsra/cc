#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a;
	double b;
	char c; // 0 -9 also have their ascii code
	char d=97;
	cin>>a>>b>>c;
	// c takes 9 as a chracter automatically using cin
	// but in d 97 is taken as ascii value of a charz
	// cin takes input till when it get space or \n;
	cout<<a<<" "<<b<<" " <<c<<" "<<(int)c<<" "<<d;
	return 0;
}