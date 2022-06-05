#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//priority order
	/* double >float> llint> lint >int> char */
	char c='a';
	char d='a';
	cout<<c++<<endl; // calculation acn to higher pref
	cout<<(int)c<<endl;
	cout<<c+d;
	return 0;
}
