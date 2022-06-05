#include <bits/stdc++.h>
using namespace std;
bool pali(string str)
{
	    bool isTrue=false;
        for(int i=0;i<=n/2;i++)
        {
        	if(str[i]==str[n-1-i])
        	{
        		isTrue=true;


        	}
        	else
        	{
        		isTrue=false;
        		return isTrue;

        	}
        }

    return isTrue;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str[n];
		cin>>str;
		// xor both diff 1
		if(pali(str))
		{
			cout<<"0"<<endl;

		}
		else
		{
		for(int i=0;i<n;i++)
		{



		}
	    } 








		
	





	}
	return 0;
}
