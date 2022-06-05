#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	// int,    char,        long int, long long int,float,double
	// 10^9  -128 to 123       10^12     10^18
	int a=100000;
	int b=100000;
	int c=a*b;
	cout<<c<<endl;
	long int d=a*1ll*b; // still giving the overflowed result as it is calculates as int int only;
	// 1ll mean cal is hapeening in lli so it store in long int
	cout<<d;
	// why not float or double
	double e=1000000;
	double f=1000000;
	double g=e*f;
	cout<<fixed<<g<<endl;
	cout<<fixed<<setprecision(0)<<g<<endl;

	return 0;
}