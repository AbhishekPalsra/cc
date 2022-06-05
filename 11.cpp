#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
   int a=100000;
   int b=100000;
   long int c=a*b;

   cout<<c<<endl; // still overflow;
    c=a*(long int )b; //noice
   cout<<c<<endl;
   c=a*1LL*b; // noice
   cout<<c<<endl;
   c=a*b*1LL; // PRECENDENCE IS FOLLOWED 
   cout<<c<<endl;
   









}