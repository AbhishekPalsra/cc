#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{  
	double a=1000000;
	double b=1000000;
	
	cout<<a*b<<endl; // scientific notation
	cout<<fixed<<a*b<<endl; // fixed keyword
	cout<<fixed<<setprecision(3) <<a*b<<endl;
	double c;
	c=1e+24; // precision error in double and float
	cout<<c<<endl;
	float d;
	d=1e+24;
	cout<<d<<endl; 
	double f=1e+24;
	// we cannt acccuraterly store big numbers in float;
	// big number is stored in cost of accuracy
	// if all cal is in integers soo always use int ,not use double or float it avoid accurayc
	

	cout<<fixed<<f<<endl;


 












}