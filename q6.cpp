#include<bits/stdc++.h>
using namespace std;
int fun(int y)
{
	if(y<0) // for negative numbers
    {
    	y=  -1*y;
    }
 //    if(y==0) // for zero number
 //    {
 //    	return 1;
 //    }
	// int count=0;
	// while(y!=0)
	// {
	//    count++;
	//    y/=10;

       

	// }
	// return count;
	//best way to find number of digits use maths
	return log10(y)+1;


}
int main()
{
	int arr[][3]={{2,3,4},{4,-45,3},{78,98 ,10}};
	int i=0;
	for(auto &x:arr)
	{
		for(auto &y:x)
		{
			if(fun(y)%2==0)
			{
                 i++;
			}




		}
	}
	cout<<i;
	return 0;
}