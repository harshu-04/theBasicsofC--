//passing objects
#include<iostream>
using namespace std;
class Time
{
int h,m,s;
public:
        Time()
        {
        h=m=s=0;
        }
        Time(int x,int y, int z)
        {
        h=x;m=y;
        s=z;
        }

        void add( Time X, Time Y)
        {
        s=X.s+Y.s;
         m=X.m+Y.m;
         h= X.h+Y.h;
        if(s>59)
        {
        s-=60;
        m+=1;
        }

        if(m>59)
        {
        m-=60;
        h+=1;
        }

        }
        void display()
        {
        cout<<h<<":"<<m<<":"<<s;
        }
        };
        main()
        {
        Time A(2,50,40),B(3,10,20);
        Time C;
        C.add(A,B);
        C.display();
        }
