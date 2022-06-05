#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{  

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i>=j)
			{
				cout<<"*";
			}
			
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j>=i)
			{
				cout<<"*";
			}
			
		}
		cout<<endl;
	}



return 0;

}