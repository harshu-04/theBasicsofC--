//factorial using recursion
#include<iostream>
using namespace std;
int fact(int);
main()
{
int a,f;
cout<<"enterr the no \n";
cin>>a;
f=fact(a);
cout<<"fact is "<<f;
}
int fact(int a)
{
if(a==0)
return 1;
else
return a*fact(a-1);
}
